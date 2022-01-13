#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "A Garden Diary";
	char * ptr = strchr(s1, 'a');

	printf("%p\n",&s1[3]);
	printf("%p\n",&s1[11]);
	printf("%s\n",&s1[3]);
	printf("%s\n",&s1[11]);

	while(ptr != NULL)
	{
		printf("%s\n", ptr);
		printf("%p\n", ptr);
		ptr = strchr(ptr + 1, 'a');
	}

	return 0;
}
