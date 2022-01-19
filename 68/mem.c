#include <stdio.h>
void hello()
{
    printf("Hello, world!\n");
}

int main()
{
    printf("%p\n", hello); // 00D1137F(32비트): 함수 이름도 포인터이므로 메모리 주소가 출력됨

    return 0;
}
