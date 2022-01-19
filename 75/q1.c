#include <stdio.h>

#define RGB(a ,b, c) ((a) | ((b)<<8) | ((c)<<16))

int main()
{
	int r,g,b;
	scanf("%d %d %d", &r, &g, &b);

	printf("#%06x\n", RGB(r,g,b));
	printf("#%06X\n", RGB(1 & 1, 2 & 2, 3&3));

	return 0;
}
