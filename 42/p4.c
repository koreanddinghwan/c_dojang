#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char * s1 = " Wonderland";
	char * s2 = malloc(sizeof(char) * 30);

	strcat(s2, "Alice in");
	
	strcat(s2, s1);

	printf("%s", s2);

	free(s2);



	return 0;
}
