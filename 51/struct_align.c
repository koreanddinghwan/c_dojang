#include <stdio.h>
#include <stddef.h>


struct PacketHeader {
	char flags;
	int seq;
} __attribute__((aligned(1), packed));

int main()
{
	struct PacketHeader header;

	printf("%lu\n", sizeof(header.flags));
	printf("%lu\n", sizeof(header.seq));
	printf("%lu\n", sizeof(header));
	printf("%lu\n", offsetof(struct PacketHeader, flags));
	printf("%lu\n", offsetof(struct PacketHeader, seq));

	return 0;
}
