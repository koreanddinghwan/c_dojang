#include <stdio.h>

void hello(int count)
{
	if (count == 0)
		return;

	printf("Hello %d\n",count);

	hello(--count);
}

int main()
{
	hello(5);
	
	return 0;
}
