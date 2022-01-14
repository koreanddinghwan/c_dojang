#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char * s1 = malloc(sizeof(char) * 60 + 1);

	scanf("%s", s1);

	char * ptr = strtok(s1, ".");

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, ".");
	}


	free(s1);

	return 0;

}
