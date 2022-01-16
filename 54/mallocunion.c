#include <stdio.h>
#include <stdlib.h>
#include <string.h>


union Box {
	short candy;
	float snack;
	char doll[16];
};

int main()
{
	union Box * b1 = malloc(sizeof(union Box));

	printf("%lu\n", sizeof(b1));
	printf("%p\n", b1);
	printf("%p\n", &b1);

	printf("%lu\n", sizeof(* b1));

	strcpy(b1->doll, "bear");
	printf("%p\n", b1);
	printf("%p\n", &b1);
	printf("%p\n", &b1->snack);
	printf("%p\n", &b1->doll);

	printf("%d\n", b1->candy);
	printf("%f\n", b1->snack);
	printf("%s\n", b1->doll);

	free(b1);


	return 0;
}

