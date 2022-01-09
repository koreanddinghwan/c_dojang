#include <stdio.h>


int main()
{
	int bank;
	scanf("%d",&bank);

	while (bank > 0)
	{
		/*잔액 체크*/
		if (bank - 1200 < 0)
			break;
		
		bank -= 1200;
		printf("%d\n", bank);

	}



	return 0;
}
