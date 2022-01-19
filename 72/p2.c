#include <stdio.h>

struct Point2D {
	float x;
	float y;
} __attribute__((aligned(1), packed));

struct RectangleFileFormat {
	short magic;
	int version;
	struct Point2D p1;
	struct Point2D p2;
	char desc[30];
} __attribute__((aligned(1), packed));

int main()
{
	struct RectangleFileFormat rf;

	FILE *fp = fopen("rect.bin", "rb");
	
	fread(&rf, sizeof(rf), 1, fp);

	fclose(fp);

	return 0;
}
