#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char * getName()
{
	char * ptr = malloc(sizeof(char) * 100);

	strcpy(ptr, "Neptune");

	return ptr;
}

int main()
{
	char * name;

	name = getName();

	printf("%s\n", name);

	free(name);

	return 0;
}
