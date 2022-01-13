#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "A Garden Diary";

	char *ptr = strstr(s1, "den");

	printf("%s\n", ptr);
	printf("%p\n", ptr);
	printf("%p\n", &s1[5]); 

	return 0;
}
