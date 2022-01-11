#include <stdio.h>

int main()
{
	int numArr[3][4] = {
		{11,22,33,44},
		{55,66,77,88},
		{99,110,121,132}
	}; //가로 4, 세로3

	int row = sizeof(numArr[0]) / sizeof(int); // 16 / 4
	int col = sizeof(numArr) / sizeof(numArr[0]); // 48 / 16

	int (*numPtr)[4] = numArr; //가로 4개짜리 배열을 가리키는 배열 포인터 선언

	printf("%p\n", *numPtr); //2차원 배열 포인터의 역참조값, 세로 첫번째 주소
	printf("%p\n", &numPtr); //2차원 배열 포인터의 주소.
	printf("%p\n", numPtr); //배열 포인터가 가리키고있는 주소.  
	printf("%p\n", numPtr[1]);

	printf("%p\n", *numArr); //2차원 배열의 역참조값, 세로 첫번째 주소

	printf("%p\n", &numArr[0]); //numArr의 시작 주소값
	printf("%p\n", &numArr[1]); //시작 주소값에서 int(4byte) * 4 만큼 차이. => 16byte만큼 큼
	printf("%p\n", &numArr[1][2]); //위의 주소값에서 1byte * 2만큼 차이, =>2byte만큼 큼.

	printf("%d\n", numPtr[2][1]); //2차원 배열 포인터를 인덱스로 접근

	printf("%lu\n", sizeof(numArr));

	printf("%lu\n", sizeof(numPtr));

	return 0;

}

