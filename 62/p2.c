#include <stdio.h>

float sub(float a, float b)
{
	float num1 = a - b;
	return num1;
}

int main()
{
	float num1;

	num1 = sub(1.0f, 0.1f);

	printf("%f\n", num1);

	return 0;
}
