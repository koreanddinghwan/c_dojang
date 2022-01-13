#include <stdio.h>
#include <string.h>

int main()
{
	char * s1 = "hello";
	char s2[10] = "Hello";

	printf("%lu\n", strlen(s1));
	printf("%lu\n", strlen(s2));

	return 0;
}
