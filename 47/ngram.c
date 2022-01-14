#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char * s1 = malloc(sizeof(char) * 30 + 1);
	scanf("%s", s1);
	int length = 0; //문자열 길이

	length = strlen(s1);

	for(int i = 0; i < length - 1; i++)
	{
		printf("%c%c\n", s1[i], s1[i + 1]);
	}



	free(s1);

	return 0;
}
