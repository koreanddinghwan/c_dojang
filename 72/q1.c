#include <stdio.h>
#include <string.h>

struct X820Frimware {
	int serial;
	char desc[13];
	short tag;
	char mode;
} __attribute__((aligned(1), packed));

int main()
{
	struct X820Frimware x1;
	memset(&x1, 0, sizeof(x1));

	FILE * fp = stdout;

	x1.serial = 1800891002;
	strcpy(x1.desc, "X820 Frimware");
	x1.tag = 8512;
	x1.mode = '-';

	fwrite(&x1, sizeof(x1), 1, fp);

	fclose(fp);

	return 0;
}
