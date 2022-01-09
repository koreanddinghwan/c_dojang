#include <stdio.h>

int main()
{
	unsigned int num1;
	unsigned int sum = 0;
	unsigned int i = 0;

	scanf("%d", &num1);


	do
	{
		sum = sum + i;
		i++;
	} while(i <= num1);
	printf("%d", sum);

	return 0;
}


