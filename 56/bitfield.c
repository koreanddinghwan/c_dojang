#include <stdio.h>

struct Flags {
	unsigned int a : 1;
	unsigned int b : 4;
	unsigned int c : 8;
};


int main()
{
	struct Flags f1;

	f1.a = 1; //1
	f1.b = 15; //1111
	f1.c = 255;//1111 1111
	
	printf("%u \n", f1.a);
	printf("%u \n", f1.b);
	printf("%u \n", f1.c);

	return 0;
}
