#include <stdio.h>
#include <string.h>

struct Data{
	char c1;
	short num1;
	int num2;
	char s1[20];
} __attribute__ ((aligned(1), packed));


int main()
{
 	struct Data d1;
	memset(&d1, 0, sizeof(d1));

	d1.c1 = 'a';
	d1.num1 = 32100;
	d1.num2 = 2100000100;
	strcpy(d1.s1, "Hello, world!");

	FILE *fp = fopen("data2.bin", "wb");

	fwrite(&d1, sizeof(d1), 1, fp);

	fclose(fp);

	return 0;
}
