#include <stdio.h>

union Data {
	char c1;
	int num1;
	long long num2;
};

int main()
{
	union Data d1;

	d1.num1 = 0x1111;
	d1.num2 = 0x1111111111111111;

	printf("0x%x %lu\n", d1.c1, sizeof(d1));
	printf("0x%llx\n", d1.num2);
	return 0;
}
