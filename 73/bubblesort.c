#include <stdio.h>

void bubble_sort(int arr[], int count) //배열과 요소개수
{
	//임시저장
	int temp; 

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count - 1; j++)
		{
			//2개씩 비교하는걸 배열 내에서 총 9번하고, 전체 반복을10번
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main()
{
	//정렬해야하는 배열
	int NumArr[10] = { 8, 4, 2, 5, 3, 7, 10, 1, 6, 9 }; 

	bubble_sort(NumArr, sizeof(NumArr) / sizeof(int));

	for (int i = 0; i < 10; i++)
	{
		printf("%d ",NumArr[i]);
	}

	return 0;
}
