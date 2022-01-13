#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *s1 = malloc(sizeof(char) * 20);

	sprintf(s1,"%s\n", "world");

	printf("%s", s1);

	s1[1] = 'e';
	printf("%s", s1);
	free(s1);

	return 0;
}

