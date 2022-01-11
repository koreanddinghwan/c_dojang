#include <stdio.h>

int main()
{
	int numArr[10] = {11,22,33,44,55,66,77,88,99,110};

	int *numPtr = numArr; //포인터에 int형 배열 할당

	printf("%d\n", *numPtr); //배열은 첫번째 요소의 정보만 담고있음. 그래서 역참조하면 첫번째 요소만 가져온다.
	printf("%d\n", *numArr); //배열 자체를 역참조해도 첫번째 요소만
	printf("%d\n", numPtr[5]); //numPtr에 배열의 주소가 담겨있음. 그래서 인덱스로 접근가능
	printf("%lu\n", sizeof(numArr)); //배열의 크기는 int 4byte * 10개
	printf("%lu\n", sizeof(numPtr)); //포인터의 크기는 int형 포인터라서 8

	return 0;
}
