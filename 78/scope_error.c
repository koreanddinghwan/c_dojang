#include <stdio.h>

int num1;

void printGlobal()
{
	printf("%d\n", num1);
}

int main()
{
	printf("%d\n", num1);

	num1 = 20;

	printGlobal();

	return 0;
}
