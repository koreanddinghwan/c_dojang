#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	long long *numPtr = malloc(sizeof(long long)); //long long의 크기만큼 동적메모리 할당

	memset(numPtr, 0x0, 8); //numPtr이 가리키는 메모리를 8바이트만큼 0x27로 설정
	printf("%lld\n", *numPtr);
	printf("0x%llx\n", *numPtr); //numPrt은 longlong 자료형이고, 16진수로 표헌

	free(numPtr); //동적 메모리 해제

	return 0;
}

