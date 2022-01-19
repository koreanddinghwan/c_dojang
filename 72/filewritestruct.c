#include <stdio.h>

struct Data {
	short num1;
	short num2;
	short num3;
	short num4;
} __attribute__((aligned(1), packed));


int main()
{
	struct Data d1;

	d1.num1 = 100;
	d1.num2 = 200;
	d1.num3 = 300;
	d1.num4 = 400;

	FILE * fp = fopen("data.bin", "wb");

	fwrite(&d1, sizeof(d1), 1, fp);

	fclose(fp);

	return 0;
}
