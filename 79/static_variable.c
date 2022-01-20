#include <stdio.h>

static int num1;

int main()
{
	static int num2;

	printf("%d\n", num1);
	printf("%d\n", num2);


	return 0;
}

