#include <stdio.h>
#include <string.h>

int main()
{
	char s1[10] = "Hello";
	char *s2 = "Hallo";

	int ret = strcmp(s1,s2);

	printf("%d", ret);

	return 0;
}
