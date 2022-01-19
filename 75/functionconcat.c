#include <stdio.h>

#define EXECUTOR(x) hello##x()

void hello1()
{
	printf("hello 1\n");
}

void hello2()
{
	printf("hello 2\n");
}

int main()
{
	EXECUTOR(1);

	EXECUTOR(2);

	return 0;
}
