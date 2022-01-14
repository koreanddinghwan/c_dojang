#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
	char * s1 = malloc(sizeof(char) * 30 + 1);
	char * ptr; //문자열 시작주소 포인터
	char * arr[31] = { NULL, }; //포인터 시작주소 모을 포인터배열
	int count = 0;
	char copied[31] = ""; //붙인문자열
	int pelinedrome = true;
	int copiedlen = 0;


	scanf("%[^\n]s", s1);

	ptr = strtok(s1, " ");

	while (ptr != NULL)
	{
		arr[count] = ptr;
		ptr = strtok(NULL, " ");
		count ++;
	}

	for (int i = 0; i < count; i++)
	{
		strcat(copied, arr[i]);
	}

	printf("%s\n",copied); 

	copiedlen = strlen(copied); //붙인 문자열의 길이
	
	if (copiedlen % 2 == 0)
	{
		for (int i = 0; i <= (copiedlen - 1)/2; i++)
		{
			if (copied[i] != copied[copiedlen - 1 - i])
			{
				pelinedrome = false;
				break;
			}
		}
	} else {
		for (int i = 0; i < copiedlen/ 2; i++)
		{
			if (copied[i] != copied[copiedlen -1 -i])
			{
				pelinedrome = false;
				break;
			}
		}
	}
	printf("%d", pelinedrome);

	


	free(s1);
	return 0;
}
