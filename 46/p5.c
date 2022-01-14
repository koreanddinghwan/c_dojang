#include <stdio.h>
#include <stdlib.h>

int main()
{
	char * s1 = malloc(sizeof(char)* 40);
	float num1 = 98.415237f;
	int num2 = 0x3fce1920;

	sprintf(s1 , "%f 0x%x", num1, num2);
	
	printf("%s", s1);

	return 0;
}
