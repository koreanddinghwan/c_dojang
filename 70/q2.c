#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char * buffer = malloc(100);
	memset(buffer, 0, 100);

	FILE * fp = fopen("words.txt", "r");

	fgets(buffer, 100, fp);

	printf("%s\n", buffer);

	fclose(fp);

	free(buffer);

	return 0;
}
