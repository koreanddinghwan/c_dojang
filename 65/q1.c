#include <stdio.h>
#include <math.h>

struct Point2D {
	int x;
	int y;
};

double getDistance(struct Point2D p1, struct Point2D p2)
{
	double result;
	double x_diff = p1.x - p2.x;
	double y_diff = p1.y - p2.y;

	result = sqrt((x_diff * x_diff) + (y_diff * y_diff));

	return result;
}

int main()
{
	struct Point2D p1;
	struct Point2D p2;

	scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);

	printf("%f\n", getDistance(p1, p2));

	return 0;
}
