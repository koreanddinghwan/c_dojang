#include <stdio.h>

int getQuotientAndRemainder(int n1, int n2, int * rm)
{
	*rm = n1 % n2;


	return n1/n2;
}

int main()
{
	int num1;
	int num2;
	int quotient;
	int remainder;

	scanf("%d %d", &num1, &num2);

	quotient = getQuotientAndRemainder(num1, num2, &remainder);

	printf("%d %d\n", quotient, remainder);

	return 0;
}
