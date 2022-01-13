#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char s1[40];

	scanf("%s", s1);

	char s2[30] = "th";

	strcat(s1, s2);

	printf("%s\n", s1);

	return 0;
}
