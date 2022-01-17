#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void * allocMemory()
{
	void * ptr = malloc(100);

	return ptr;
}


int main()
{
	char * s1 = allocMemory();

	strcpy(s1, "Helloword");

	printf("%s\n", s1);

	free(s1);

	int * numPtr1 = allocMemory();
	numPtr1[0] = 10;
	numPtr1[1] = 20;
	printf("%d %d\n", numPtr1[1], numPtr1[0]);

	free(numPtr1);

	return 0;
}
