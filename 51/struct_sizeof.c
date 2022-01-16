#include <stdio.h>
#include <stddef.h>


struct PacketHeader {
	int seq;
	char flags;
	long long test;
};


int main()
{
	struct PacketHeader header;

	printf("%lu\n", sizeof(header.flags));
	printf("%lu\n", sizeof(header.seq));
	printf("%lu\n", sizeof(header.test));
	printf("%lu\n", sizeof(header));
	printf("%lu\n", offsetof(struct PacketHeader, flags));
	printf("%lu\n", offsetof(struct PacketHeader, seq));
	printf("%lu\n", offsetof(struct PacketHeader, test));
	printf("%lu\n", sizeof(struct PacketHeader));

	return 0;
}
