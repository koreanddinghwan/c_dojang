#include <stdio.h>

int main() {
	unsigned long long num1;
	scanf("%lld", &num1);

	num1 = num1 << 16;
	
	printf("%llu",num1);
	return 0;
}
