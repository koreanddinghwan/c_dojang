#include <stdio.h>

int main()
{
	int count;
	scanf("%d", &count);

	do {
		printf("Hello, world! %d\n", count);
		count--;
	} while (count > 0);

	return 0;
}

