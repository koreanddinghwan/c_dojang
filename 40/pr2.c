#include <stdio.h>
#include <stdlib.h>

int main()
{
	char * s1 = malloc(sizeof(char) * 10);

	printf("문자열입력:");

	scanf("%s", s1);

	printf("%s\n", s1);

	free(s1);

	return 0;

}
