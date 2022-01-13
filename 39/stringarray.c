#include <stdio.h>

int main()
{
	char s1[10] = "Hello";
	char * s2 = "Hi";
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%p\n", s2);
	printf("%c\n", s1[1]);
	return 0;
}
