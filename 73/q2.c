#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void * a, const void * b)
{
	char *s1 = (char *)a;//포인터를 형변환,  s1에 a포인터가 가리키는 문자열주소 할당
	char *s2 = (char *)b;
	
	if (strcmp(s1,s2) > 0)
		return -1;
	
	if (strcmp(s1,s2) < 0)
		return 1;

	return 0;
}
	


int main()
{
	//20자 짜리 10개문장
	char s1[10][20];

	//문자열 입력받음
	scanf("%s %s %s %s %s %s %s %s %s %s",
        s1[0], s1[1], s1[2], s1[3], s1[4], s1[5], s1[6], s1[7], s1[8], s1[9]
    );

	//문자열포인터, 10, 20, 비교함수
    qsort(s1, sizeof(s1) / sizeof(s1[0]), sizeof(s1[0]), compare);

    for (int i = 0; i < 10; i++)
    {
        printf("%s ", s1[i]);
    }

    printf("\n");

    return 0;
}
