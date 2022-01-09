#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int i;


	scanf("%d %d", &num1, &num2);/*num1시작숫자, num2끝나는숫자*/
	i = num1; /*i에 시작숫자 지정*/

	while (1)
	{	
		/*i가 끝나는 숫자가되면*/
		if (i > num2)
			break;


		/*i 일의자리숫자가 7이면 무시.*/
		if (i % 10 == 7)
		{
			i = i + 1;
			continue;
		}	
		
		printf("%d ", i);
		i++;
	}
	return 0;
}



