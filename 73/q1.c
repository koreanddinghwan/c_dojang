#include <stdio.h>

int *bubble_sort(int arr[],int size)
{
	int temp;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size-1;j++)
		{
			if (arr[j] <arr[j+1])
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	return arr;
}

int main()
{
	int numArr[10];

    scanf("%d %d %d %d %d %d %d %d %d %d", 
        &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4], 
        &numArr[5], &numArr[6], &numArr[7], &numArr[8], &numArr[9]
    );

    bubble_sort(numArr, sizeof(numArr) / sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numArr[i]);
    }

    printf("\n");

    return 0;
}
