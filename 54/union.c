#include <stdio.h>
#include <string.h>

union Box {
	short candy;
	float snack;
	char doll[8];
};

int main()
{
	union Box b1;

	printf("%lu\n", sizeof(b1));
	
	strcpy(b1.doll, "bear");

	printf("%d\n", b1.candy);
	printf("%f\n", b1.snack);
	printf("%s\n", b1.doll);

	return 0;
}
