#include <stdio.h>

int main()
{
	int i;
	int count;
	scanf("%d", &count);

	i = 0;
	do {
		printf("Hello, world! %d\n", i);
		i++;
	} while (i <  count);

	return 0;
}

