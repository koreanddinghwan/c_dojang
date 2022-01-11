#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int n;

	scanf("%d", &n);

	int **m = malloc(sizeof(int) * n);

	for (int i = 0; i<n; i++)
	{
		memset(m[i], 0, sizeof(int) * n);
	}

	for (int i = 0; i<n; i++)
	{
		m[i][i] = 1;
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j =0; j < n; j++)
		{
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++)
		free(m[i]);

	free(m);

	return 0;
}

