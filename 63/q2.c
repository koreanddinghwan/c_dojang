#include <stdio.h>
#include <stdlib.h>

void allocArray(void **Arrptr, int num, int size)
{
	*Arrptr = malloc(size * num);
}

int main()
{
	long long * numArr1;
	int * numArr2;

	allocArray((void **)&numArr1, 10, sizeof(long long));
	allocArray((void **)&numArr2, 3 , sizeof(int));

	scanf("%lld %d", &numArr1[9], &numArr2[2]);
	printf("%lld %d\n", numArr1[9], numArr2[2]);

	free(numArr1);
	free(numArr2);

	return 0;
}

