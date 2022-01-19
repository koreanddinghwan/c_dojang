#include <stdio.h>

void setIdentityMatrix(float arr[][4], int n)
{
	for(int i = 0; i < n;i++)
	{
		for (int j = 0; j < n ; j++)
		{
			if (i == j)
			{
				arr[i][j] = 1.0f;
			}
		}
	}
}

int main()
{

	float matrix[4][4] = { 0.0f, };

    int n = sizeof(matrix[0]) / sizeof(float);

    setIdentityMatrix(matrix, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%f ", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}
