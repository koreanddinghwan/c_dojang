#include <stdio.h>

int fib(int num1)
{
	if (num1 == 0)
		return 0;
	if (num1 == 1)
		return 1;

	return fib(num1 - 2) + fib(num1 - 1);
}

int main()
{
	int num1;

	scanf("%d", &num1);

	printf("%d\n", fib(num1));

	return 0;
}

