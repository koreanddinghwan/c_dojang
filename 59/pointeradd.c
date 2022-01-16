#include <stdio.h>

int main()
{
	int numArr[5] = {11,22,33,44,55};
	int *numPtrA;
	int * numPtrB;
	int * numPtrC;


	numPtrA = numArr;

	numPtrB = numPtrA + 1;
	numPtrC = numPtrB + 1;

	printf("%p\n", numPtrA);
	printf("%d\n", *numPtrA);
	printf("%p\n", numPtrB);
	printf("%d\n", *numPtrB);
	printf("%p\n", numPtrC);
	printf("%d\n", *numPtrC);

	return 0;
}
	
