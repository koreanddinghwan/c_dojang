#include <stdio.h>

int main()
{
	int num1 = -10; //10을 num1이라는 변수에 저장. 이때 cpu가 메모리를 할당함.  
	int *num1ptr;

	printf("num1 변수의 메모리 주소는:%p\n", &num1);
	printf("num1포인터 변수의 메모리주소는:%p\n", num1ptr);

	num1ptr = &num1;



	printf("num1포인터변수의 메모리주소: %p\n", num1ptr);
	printf("num1 변수의 메모리주소: %p\n", &num1);

	return 0;

}
