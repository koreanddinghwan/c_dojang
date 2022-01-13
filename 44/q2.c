#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char * s1 = malloc(sizeof(char) * 1000 + 1);
	int count = 0;
	char * ptr;

	scanf("%[^\n]s", s1);
	
	ptr = strchr(s1, ' ');
	count++;

	while(ptr != NULL)
	{
		ptr = strchr(ptr + 1, ' ');
		if (ptr != NULL)
			count++;
	}
	
	printf("%d",count);
	free(s1);

	return 0;
}
