#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char * s1 = malloc(sizeof(char) * 30 + 1); //입력받은 문자열 보관할 포인터
	char *strarr[30] = { NULL, };//자른 문자열의 시작 포인터 보관할 포인터배열
	int count = 0;

	scanf("%s", s1);

	printf("%s", s1);
	char * ptr  = strtok(s1, " ");


	while (ptr != NULL)
	{
		strarr[count] = ptr;

		ptr = strtok(NULL, " ");
		printf("%s\n", ptr);
		count++;
	}
	printf("%d\n", count);

	for (int i = 0; i < count - 1; i++)
	{
		printf("%s %s", strarr[i], strarr[i+1]);	
	}


	free(s1);

	return 0;
}
