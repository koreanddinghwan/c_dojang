#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char * s1 = malloc(sizeof(char) * 1000 + 2);
	int count = 0, i = 0;
	scanf("%[^\n]s", s1);

	char *sArr[1001] = {NULL, };

	char * ptr = strtok(s1, ",.' ");

    while (ptr != NULL)            // 자른 문자열이 나오지 않을 때까지 반복
    {
        sArr[i] = ptr;             // 문자열을 자른 뒤 메모리 주소를 문자열 포인터 배열에 저장
        i++;                       // 인덱스 증가

        ptr = strtok(NULL, ",.' ");   // 다음 문자열을 잘라서 포인터를 반환
    }
	
	for (int i = 0; i <= 1000; i++)
	{
		if (sArr[i] != NULL && strcmp(sArr[i],"the") == 0)
		{
			count++;	
		}
	}

	printf("%d", count);



	free(s1);

	return 0;
}
