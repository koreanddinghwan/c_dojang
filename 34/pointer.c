#include <stdio.h>

int main(void)
{
	int *numPtr;
	int num1 = 10;
	int *numPtr2; //임의의 포인터변수 설정
	int num3; //변수 선언만하고 초기화x
	numPtr = &num1;

	printf("num1의 포인터주소는 %p\n", &num1);
	printf("numPtr의 포인터주소는 %p\n", numPtr);
	printf("numPtr의 저장된 주소에 있는 값은 %d\n", *numPtr);
	printf("numPtr2에 임의로 저장된 주소에 있는 값은 %d\n", *numPtr2);
	printf("num2에 선언된 변수의 주소값은 %p\n", &num3);
	printf("num2로 선언된 변수의 주소값에 있는 값 %d\n", num3);

	return 0;
}
