#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int size = 0;
	char *buffer = malloc(10000);
	memset(buffer, 0, 10000);

	FILE * fp = fopen("words.txt", "r");
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);

	fseek(fp,0,SEEK_SET);
	while (feof(fp) == 0)
	{
		fread(buffer, 1,10000,fp);
	}


	for (int i = size-1; i >= 0; i--)
	{
		fwrite(&buffer[i],1,1,stdout);
	}


	fclose(fp);

	return 0;
}
