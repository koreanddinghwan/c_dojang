#include <stdio.h>

struct Packet {
	char test1;
	char test2;
	char test3;
};

int main()
{
	struct Packet pkt;

	printf("%lu\n", sizeof(pkt));

	return 0;
}
