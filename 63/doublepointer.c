#include <stdio.h>
#include <stdlib.h>

void allocMemory(void **ptr, int size)
{
	*ptr = malloc(size);//매개변수로 받아온 포인터에 메모리할당
}

int main()
{
	long long * numPtr = NULL;//포인터 초기화
	
	allocMemory((void**)&numPtr, sizeof(long long));

	*numPtr = 10; //포인터의 값 참조해 값 부여
	printf("%lld\n", *numPtr);

	free(numPtr);

	return 0;
}

