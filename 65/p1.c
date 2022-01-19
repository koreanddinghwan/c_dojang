#include <stdio.h>

struct Point2D {
	int x;
	int y;
};

void  printPoint2D (struct Point2D p)
{
	printf("%d %d \n", p.x, p.y);
}

int main()
{
	struct Point2D p1;

	p1.x = 10;
	p1.y = 20;

	printPoint2D(p1);

	return 0;
}
