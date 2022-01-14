#include <stdio.h>

int main()
{
	char s1[10];
	char s2[20];
	int num1;
	float num2;

	scanf("%d %f", &num1, &num2);

	sprintf(s1, "%d", num1);
	sprintf(s2, "%f", num2);

	printf("%d\n", num1);
	printf("%f\n",num2);

	return 0;

}
