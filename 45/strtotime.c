#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "2015-06-10T15:32:19";

	char * ptr = strtok(s1, "-T:");
	printf("%p\n", &s1[4]);

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, "-T:");
	}

	printf("%s\n",s1);


	return 0;
}
