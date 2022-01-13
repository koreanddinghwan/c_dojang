#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char * s1 = "The Little Prince";

	char * s2 = malloc(sizeof(char)* 30);

	strcpy(s2, s1);

	printf("%s", s2);

	free(s2);

	return 0;

}
