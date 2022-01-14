#include <stdio.h>
#include <stdlib.h>

int main()
{
	char * s1 = "97.527824";
	float num1;

	num1 = strtof(s1, NULL);

	printf("%f\n", num1);

	return 0;
}
