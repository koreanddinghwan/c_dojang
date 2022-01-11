#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long ***m = malloc(sizeof(long long **) * 2);

	for (i = 0; i < 2; i++)
	{
		**m[i] = malloc(sizeof(long long *) * 3);
	}

	
