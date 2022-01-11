#include <stdio.h>

int main()
{
	int numArr[5];
	int smallestNumber;

	scanf("%d %d %d %d %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]);

	for (int i = 0; i < (sizeof(numArr) / sizeof(int)); i++)
	{
		if (i == 0)
		{
			smallestNumber = numArr[0];
			continue;
		}
	
		smallestNumber = smallestNumber > numArr[i] ? numArr[i] : smallestNumber;

	}
	printf("%d", smallestNumber);

	return 0;
}

