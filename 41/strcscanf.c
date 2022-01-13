#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20];
	char s2[20];

	printf("문자열 두 개를 입력하시오.");
	scanf("%s %s", s1, s2);

	int ret = strcmp(s1, s2);

	printf("%d", ret);

	switch(ret)
	{
		case 0:
			printf("두 문자열이 같습니다.");
			break;
		case ret > 0:
			printf("%s이 %s보다 큽니다.",s1,s2);
			break;
		case ret < 0:
			printf("%s가 %s 보다큽니다.", s2,s1); 
			break;
	}

	return 0;
}
