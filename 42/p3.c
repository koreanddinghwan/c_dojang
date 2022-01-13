#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char s1[20] = " 9th Symphony";
	char s2[40] = "Beethoven";

	strcat(s2, s1);

	printf("%s",s2);


	return 0;
}
