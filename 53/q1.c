#include <stdio.h>
#include <math.h>

struct Point2D {
	int x;
	int y;
};

int main()
{
	struct Point2D p[4];
	double length = 0.0f;

	scanf("%d %d %d %d %d %d %d %d", &p[0].x, &p[0].y, &p[1].x, &p[1].y, &p[2].x, &p[2].y, &p[3].x, &p[3].y);

	for (int i = 0; i < sizeof(p) / sizeof(struct Point2D) - 1;i++)
	{
		int diff_x = p[i].x - p[i+1].x;
		int diff_y = p[i].y - p[i+1].y;

		length += sqrt((diff_x* diff_x) + (diff_y * diff_y));
	}

	printf("%f\n", length);


	return 0;
}
