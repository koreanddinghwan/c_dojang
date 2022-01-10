#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *numPtr; //int형 포인터
	printf("%p\n", numPtr);
	numPtr = malloc(sizeof(int)); //int크기만큼 메모리 부여

	*numPtr = 10; //포인터 주소로 역참조해서 값 할당

	printf("%d\n", *numPtr); //역참조해서 값 출력

	free(numPtr);
	printf("%p\n", numPtr);
	printf("%d\n", *numPtr); //역참조해서 값 출력
	return 0;
}
	
	
