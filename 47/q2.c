/*
표준 입력으로 정수와 길이 10 이하의 문자열이 입력됩니다. 
입력된 문자열을 정수만큼 문자 단위로 N-gram을 출력하는 프로그램을 만드세요(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다). 
만약 입력된 문자열의 길이가 입력된 정수 미만이라면 wrong을 출력하세요.

정답에는 C 언어 컴파일러에서 정상적으로 컴파일되는 전체 코드를 입력해야 합니다.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int num; //입력받은 정수
	char *str = malloc(sizeof(char) * 10 + 1); //입력받은 문자열 메모리할당 
	
	scanf("%d %s", &num, str);


	int i = 0;
	while(1)
	{
		//입력된 문자열이 정수보다 작으면 오류.
		if (strlen(str) < num)
		{
			printf("%s", "wrong");
			break;
		}

		if (strlen(str) - num < i)
			break;

		for (int  j = i; j <i + num; j++)
		{
			printf("%c", str[j]);
		}

		printf("\n");
		
		i++;
	}



	free(str);

	return 0;
}


