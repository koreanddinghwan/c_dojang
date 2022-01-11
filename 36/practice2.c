#include <stdio.h>

int main()
{
	int decimal = 0;
	int binary[4] = {1,1,0,1};

	int size_of_arr = sizeof(binary) / sizeof(int);
	int sum = 0;

	for (int i = 0; i < size_of_arr; i++)
	{
		sum += binary[i] * (1 << (size_of_arr -1 - i));
	}
	printf("%d", sum);

	return 0;
}


