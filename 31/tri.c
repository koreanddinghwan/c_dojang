#include <stdio.h>


int main()
{
	int input;
	scanf("%d", &input);

	for (int i = 1; i <= input; i++)
	{
		for (int j = 0; j < input - i; j++)
			printf(" ");

		for (int k = 0; k < (1+(i-1)*2); k++)
			printf("*");


		for (int l = 0; l < input - i; l++)
			printf(" ");

		printf("\n");
	}
	return 0;
}

