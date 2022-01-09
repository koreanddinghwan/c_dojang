#define _CRT_SECURE_NO_WARGINGS
#include <stdio.h>

int main() {
	
	int count;

	scanf("%d", &count);

	for (int i = 0; i < count; i ++)
	{
		printf("Hello, world, %d",i);
	}

	return 0;
}
