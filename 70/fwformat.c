#include <stdio.h>

int main()
{
	FILE *fp = fopen("hello.txt", "w");


	fprintf(fp, "%s %d\n", "Hello", 100);

	fclose(fp);

	return 0;
}
