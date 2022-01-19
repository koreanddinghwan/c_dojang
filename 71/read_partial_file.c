#include <stdio.h>
#include <string.h>

int main()
{
	char buffer[10] = {0,}; //버퍼선언, 0으로 초기화
	
	FILE *fp = fopen("hello.txt", "r");

	fseek(fp, 2, SEEK_SET); //포인터를 파일 처음에서 2바이트만큼 순반향이동
	fread(buffer, 3,1,fp); //3바이트만큼 1회 읽어와서 버퍼에 저장, 포인터는 3바이트만큼이동
	
	printf("%s\n", buffer);

	memset(buffer, 0, 10); //버퍼를 0으로 초기화
	
	fseek(fp, 3, SEEK_CUR); //현재위치에서 3만큼 이동
	fread(buffer, 4,1,fp);

	printf("%s\n",buffer);

	fclose(fp);

	return 0;
}





