#include <stdio.h>
#include <stddef.h>


struct PacketHeader {
    int seq;    // 4바이트
    char flags;    // 1바이트
} __attribute__((aligned(1), packed));    // GCC 4.0 미만: 1바이트 크기로 정렬

int main()
{
    struct PacketHeader header;


    printf("%d\n", offsetof(struct PacketHeader, flags));    // 0
    printf("%d\n", offsetof(struct PacketHeader, seq));      // 1
  return 0;
}
