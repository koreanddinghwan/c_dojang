#include <stdio.h>


int main()
{
	int matrix[5];
	matrix[0] = 1;

	matrix[1] = 2;

	printf("%d", matrix[0]);
	printf("%p", &matrix[1]);



	return 0;
}
