#include <stdio.h>


struct Flags {
	unsigned short a : 4;
	unsigned short b : 7;
	unsigned short c : 3;
};

int main()
{
	struct Flags f1;

	f1.a = 0xffffffff;
	f1.b = 0xffffffff;
	f1.c = 0xffffffff;

	printf("%u %u %u \n", f1.a, f1.b, f1.c);

	return 0;
}
