#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Rectangle {
	int x1, y1;
	int x2, y2;
};


int main()
{
	struct Rectangle rect;
	int area;

	rect.x1 = 20;
	rect.y1 = 20;
	rect.x2 = 40;
	rect.y2 = 30;

	int w = rect.x2 - rect.x1;
	int h = rect.y2 - rect.y1;

	area = abs(h) * abs(w);

	printf("%d", area);




	return 0;
}
