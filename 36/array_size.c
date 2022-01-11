#include <stdio.h>

int main(void)
{
	int numArr[10] = {11, 22, 33 ,44 ,55 ,66,77,88,99,110};

	printf("%lu\n", sizeof(numArr));
	printf("%lu\n", sizeof(numArr) / sizeof(int));

	for (int i = 0; i < sizeof(numArr)/ sizeof(int); i++)
	{
		printf("%d\n", numArr[i]);
	}

	return 0;
}
