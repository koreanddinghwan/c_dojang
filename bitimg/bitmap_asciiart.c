#include <stdio.h>
#include <stdlib.h>

#pragma pack(push, 1) //1바이트 크기로 구조체 정렬

typedef struct _BITMAPFILEHEADER //비트맵파일 헤더 구조체
{
	unsigned short bfType; //비트맵 파일 매직넘버
	unsigned int bfSize; //파일 크기
	unsigned short bfReserved1; //예약
	unsigned short bfReserved2; //예약
	unsigned int bfOffBits; //비트맵 데이터의 시작 위치
} BITMAPFILEHEADER;

typedef struct _BITMAPINFOHEADER //BMP비트맵 정보헤더 구조체, DIB헤더
{
	unsigned int biSize; //현재 구조체 크기
	int biWidth; //비트맵 이미지의 가로크기
	int biHeight; //비트맵 이미지의 세로크기
	unsigned short biPlanes; //사용하는 색상판 수
	unsigned short biBitCount; //픽셀 하나당 비트 수
	unsigned int biCompression; //압축방식
	unsigned int biSizeImage; //비트맵 이미지의 픽셀 데이터 크기
	int biXpelsPerMeter; //그림의 가로 해상도(미터당 픽셀)
	int biYpelsPerMeter; //그림의 세로 해상도(미터당 픽셀)					
	unsigned int biClrUsed; //색상 테이블에서 실제 사용되는 색상 수
	unsigned int biClrImportant; //비트맵 표현위해 사용되는 색상 인덱스 수
} BITMAPINFOHEADER;

typedef struct _RGBTRIPLE            // 24비트 비트맵 이미지의 픽셀 구조체
{
    unsigned char rgbtBlue;          // 파랑
    unsigned char rgbtGreen;         // 초록
    unsigned char rgbtRed;           // 빨강
} RGBTRIPLE;

#pragma pack(pop)



#define PIXEL_SIZE 3 //픽셀의 한 개 크기 3바이트(24비트)
#define PIXEL_ALIGN 4 //픽셀 데이터 가로 한 줄은 4의 배수로 정렬된다.


int main()
{
	FILE *fpBmp; //비트맵 파일 포인터
	FILE *fpTxt; //텍스트 파일 포인터
	BITMAPFILEHEADER fileHeader; //비트맵 파일 헤더 구조체 변수
	BITMAPINFOHEADER infoHeader; //비트맵 정보 헤더 구조체 변수
	
	unsigned char * image; //픽셀 데이터 포인터	
	int size; //픽셀 데이터 크기
	int width, height; //비트맵 이미지의 가로, 세로크기
	int padding; //픽셀 데이터 가로 크기가 4배우 아닐때 남는 공간 크기
	
	//RGB색상값이 모두 0이면 검정, 255면 흰색, 낮은 인덱스에 획수가 많은 문자 배열해 어둡게표현
	char ascii[] = { '#', '#', '@', '%', '=', '+', '*', ':', '-', '.', ' ' };
	//각 픽셀을 표현할 아스키문자, 인덱스가 높을수록 밝아짐

	fpBmp = fopen("sample.bmp", "rb"); //비트맵 파일을 바이너리모드로 열기
	if (fpBmp == NULL) //열기 실패하면 프로그램종료
		return 0;

	//비트맵 파일 헤더 읽기, 읽기에 실패하면 파일 포인터 닫고 프로그램 종료
	if (fread(&fileHeader, sizeof(BITMAPFILEHEADER), 1, fpBmp) < 1)
	{
		fclose(fpBmp);
		return 0;
	}

	// 매직 넘버가 MB가 맞는지 확인(2바이트 크기의 BM을 리틀 엔디언으로 읽었으므로 MB가 됨)
    // 매직 넘버가 맞지 않으면 프로그램 종료
	if (fileHeader.bfType != 'MB')
	{
		fclose(fpBmp);
		return 0;
	}

	 // 비트맵 정보 헤더 읽기. 읽기에 실패하면 파일 포인터를 닫고 프로그램 종료
    if (fread(&infoHeader, sizeof(BITMAPINFOHEADER), 1, fpBmp) < 1)
    {
        fclose(fpBmp);
        return 0;
    }

	// 24비트 비트맵이 아니면 프로그램 종료
    if (infoHeader.biBitCount != 24)
    {
        fclose(fpBmp);
        return 0;
    }

	
	size =  infoHeader.biSizeImage; //픽셀 데이터 크기
	width = infoHeader.biWidth;
	height = infoHeader.biHeight;


	padding = (PIXEL_ALIGN - ((width * PIXEL_SIZE) % PIXEL_ALIGN)) % PIXEL_ALIGN;
	
	if (size == 0)    // 픽셀 데이터 크기가 0이라면
    {
        // 이미지의 가로 크기 * 픽셀 크기에 남는 공간을 더해주면 완전한 가로 한 줄 크기가 나옴
        // 여기에 이미지의 세로 크기를 곱해주면 픽셀 데이터의 크기를 구할 수 있음
        size = (width * PIXEL_SIZE + padding) * height;
    }

	image = malloc(size);    // 픽셀 데이터의 크기만큼 동적 메모리 할당

	// 파일 포인터를 픽셀 데이터의 시작 위치로 이동
    fseek(fpBmp, fileHeader.bfOffBits, SEEK_SET);

	// 파일에서 픽셀 데이터 크기만큼 읽음. 읽기에 실패하면 파일 포인터를 닫고 프로그램 종료
    if (fread(image, size, 1, fpBmp) < 1)
    {
        fclose(fpBmp);
        return 0;
    }


	fclose(fpBmp);    // 비트맵 파일 닫기
					  
	 fpTxt = fopen("ascii.txt", "w");    // 결과 출력용 텍스트 파일 열기
    if (fpTxt == NULL)    // 파일 열기에 실패하면
    {
        free(image);      // 픽셀 데이터를 저장한 동적 메모리 해제
        return 0;         // 프로그램 종료
    }

	// 픽셀 데이터는 아래 위가 뒤집혀서 저장되므로 아래쪽부터 반복
    // 세로 크기만큼 반복
    for (int y = height - 1; y >= 0; y--)
    {
        // 가로 크기만큼 반복
        for (int x = 0; x < width; x++)
        {
            // 일렬로 된 배열에 접근하기 위해 인덱스를 계산
            // (x * 픽셀 크기)는 픽셀의 가로 위치
            // (y * (세로 크기 * 픽셀 크기))는 픽셀이 몇 번째 줄인지 계산
            // 남는 공간 * y는 줄별로 누적된 남는 공간
            int index = (x * PIXEL_SIZE) + (y * (width * PIXEL_SIZE)) + (padding * y);

            // 현재 픽셀의 주소를 RGBTRIPLE 포인터로 변환하여 RGBTRIPLE 포인터에 저장
            RGBTRIPLE *pixel = (RGBTRIPLE *)&image[index];

            // RGBTRIPLE 구조체로 파랑, 초록, 빨강값을 가져옴
            unsigned char blue = pixel->rgbtBlue;
            unsigned char green = pixel->rgbtGreen;
            unsigned char red = pixel->rgbtRed;

            // 파랑, 초록, 빨강값의 평균을 구하면 흑백 이미지를 얻을 수 있음
            unsigned char gray = (red + green + blue) / PIXEL_SIZE;

            // 흑백값에 ASCII 문자의 개수를 곱한 뒤 256으로 나누면 흑백값에 따라
            // ASCII 문자의 인덱스를 얻을 수 있음
            char c = ascii[gray * sizeof(ascii) / 256];

            // 비트맵 이미지에서는 픽셀의 가로, 세로 크기가 똑같지만
            // 보통 ASCII 문자는 세로로 길쭉한 형태이므로 정사각형 모양과 비슷하게 보여주기 위해
            // 같은 문자를 두 번 저장해줌
            fprintf(fpTxt, "%c%c", c, c);    // 텍스트 파일에 문자 출력
        }

        fprintf(fpTxt, "\n");    // 가로 픽셀 저장이 끝났으면 줄바꿈을 해줌
    }

    fclose(fpTxt);    // 텍스트 파일 닫기

    free(image);      // 픽셀 데이터를 저장한 동적 메모리 해제

    return 0;
}
