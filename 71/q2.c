#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *buffer = malloc(100);
	memset(buffer, 0, 100);


	FILE *fp = fopen("words.txt", "r");
	
	fseek(fp, 7,SEEK_SET);
	fread(buffer, 4, 1, fp);
	printf("%s", buffer);
	
	memset(buffer, 0, 100);

	fseek(fp, -6, SEEK_END);
	fread(buffer, 2, 1, fp);

	printf("%s", buffer);

	fclose(fp);

	return 0;
}
	

