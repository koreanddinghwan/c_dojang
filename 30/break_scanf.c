#include <stdio.h>


int main()
{
	int count;
	int i = 1;
	scanf("%d", &count);

	while (1)
	{
		printf("%d\n", i);
		
		if (count == i)
			break;
	
		i++;
	}

	return 0;
}

	

