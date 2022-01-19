#include <stdio.h>
#include <stddef.h>  

struct PacketHeader {
	int seq;
	char flags;
};

int main()
{
    struct PacketHeader header;

    printf("%lu\n", offsetof(struct PacketHeader, flags));
    printf("%lu\n", offsetof(struct PacketHeader, seq));


    return 0;
}
