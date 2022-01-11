#include <stdio.h>

int main()
{
	int num;

	scanf("%d", &num);
	
	int numarr[num][num];

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			numarr[i][j] = 0;

			if (i == j)
				numarr[i][j] = 1;

			printf("%d ", numarr[i][j]);
		}

		printf("\n");
	}

	return 0;
}


