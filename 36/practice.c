#include <stdio.h>

int main()
{
	float scores[10] = {65.2f, 84.3f, 97.0f, 87.1f, 71.9f, 63.0f, 90.1f, 88.0f, 79.7f, 95.3f };
	float sum = 0.0f;
	float average;

	int count = sizeof(scores) / sizeof(float);

	for (int i = 0; i< count ; i++)
	{
		sum += scores[i];
	}

	average = sum / 10.0f;

	printf("%f\n", average);
}
	
