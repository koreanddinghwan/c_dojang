#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	scanf("%d", &num);

	int **m = malloc(sizeof(int *) * num);

	for (int i = 0; i < num; i++)
	{
		m[i] = malloc(sizeof(int) * num);
	}

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			m[i][j] = 0;
			if (i == j)
			{
				m[i][j] = 1;
			}

			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < num; i++)
	{
		free(m[i]);
	}

	free(m);

	return 0;
}

