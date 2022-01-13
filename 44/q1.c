#include <stdio.h>
#include <string.h>

int main()
{
	int count = 0;
	char s1[1001];
	scanf("%[^\n]s", s1);
	
	char * ptr = strchr(s1, ' ');
	count += 1;

	while (ptr != NULL)
	{
		ptr = strchr(ptr + 1, ' ');
		if (ptr != NULL)
			count++;

	}

	printf("%d", count);
	


	return 0;
}
