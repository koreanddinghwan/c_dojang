#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
	char *s1 = (char *)a;
	char *s2 = (char *)b;

	if (strcmp(s1,s2) > 0)
		return 1;

	if (strcmp(s1,s2) < 0)
		return -1;

	return 0;
}

int main()
{
	char s1[10][8] = {
		"india", "delta", "bravo", "kilo", "alfa",
		"echo", "hotel", "juliett", "golf", "charlie"
	};

	qsort(s1, sizeof(s1) / sizeof(s1[0]), sizeof(s1[0]), compare);

	for (int i = 0; i < 10; i++)
	{
		printf("%s ", s1[i]);
	}

	printf("\n");

	return 0;
}
