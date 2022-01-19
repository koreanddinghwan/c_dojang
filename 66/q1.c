#include <stdio.h>
#include <stdarg.h>

int sum(int args, ...)
{
	int i = 0;
	int result = 0;
	va_list ap;

	va_start(ap, args);
	while(i < args)
	{
		result += va_arg(ap, int);
		i++;
	}
	va_end(ap);

	return result;
}

int main()
{
	int num1, num2;
    int num3, num4, num5;

    scanf("%d %d", &num1, &num2);
    scanf("%d %d %d", &num3, &num4, &num5);

    printf("%d\n", sum(2, num1, num2));
    printf("%d\n", sum(3, num3, num4, num5));
	return 0;
}

		
