#include <stdio.h>
#include <stdlib.h>

int main()
{
	char * s1 = "0xaf10 42 0x27C 9952";
	int num1;
	int num2;
	int num3;
	int num4;
	char * end;
	printf("%p\n", &s1[6]);
	printf("%p\n", &end);
	num1 = strtol(s1, &end, 16);
	printf("%p\n", &end);
	printf("%p\n", end);
	num2 = strtol(end, &end, 16);
	num3 = strtol(end, &end, 16);
	num4 = strtol(end, NULL, 16);


	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);
	printf("%d\n", num4);


	return 0;
}
