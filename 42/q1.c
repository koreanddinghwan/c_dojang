#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char s1[31];
	char s2[31];

	scanf("%s", s1);

	strcpy(s2, s1);

	printf("%s\n", s1);
	printf("%s\n", s2);

	return 0;
}

