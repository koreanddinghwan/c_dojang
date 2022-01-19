#include <stdio.h>

struct Data {
	char c1;
	short num1;
	int num2;
	char s1[20];
} __attribute__ ((aligned(1), packed));



int main()
{
	struct Data d1;

	FILE *fp = fopen("data2.bin", "rb");

	fread(&d1, sizeof(d1), 1, fp);

	printf("%c %d %d %s", d1.c1, d1.num1, d1.num2, d1.s1);

	fclose(fp);

	return 0;
}
