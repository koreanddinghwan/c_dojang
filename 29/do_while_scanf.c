#include <stdio.h>

int main()
{
	int i;
	scanf("%d", &i);

	do {
		printf("Hello, world! %d\n", i);
		i--;
	} while (i > 0);

	return 0;
}

