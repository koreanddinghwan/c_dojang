#include <stdio.h>

int main()
{
	int count;
	int i = 1;
	scanf("%d", &count);

	while (1)
	{
		i++;

		if (i % 2 != 0)
			continue;

		printf("%d\n", i);
		
		if (count == i)
			break;
	
		
	}

	return 0;
}
