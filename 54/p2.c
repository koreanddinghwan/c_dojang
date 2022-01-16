#include <stdio.h>
#include <stdlib.h>

union Data {
	short num1;
	int num2;
};

int main()
{
	union Data * d1 = malloc(sizeof(union Data)); //포인터변수에 메모리할당, 
	
	d1->num1 = 1;
	printf("%x %x\n", d1->num1, d1->num2);

	return 0;
}



