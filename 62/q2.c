#include <stdio.h>

long long add(long long num1, long long num2)
{
	long long answer = num1 + num2;
	return answer;
}

int main()
{
	long long num1, num2;

	scanf("%lld %lld", &num1, &num2);

	printf("%lld\n", add(num1, num2));

	return 0;
}
