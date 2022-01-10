#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1 = 20;
	int *numPtr1;

	numPtr1 = &num1; //num1의 메모리 주소를 구해 numPtr에 할당

	int *numPtr2; //int형 포인터 선언

	numPtr2 = malloc(sizeof(int)); //int크기만큼 malloc에 동적 메모리할당

	printf("%p\n", numPtr1);

	printf("%p\n",numPtr2);

	free(numPtr2); //동적으로 할당한 메모리 해제

	printf("%p\n", numPtr2);

	return 0;

}
