#include <stdio.h>

int main()
{
	char s1[10];

	printf("문자열을 입력하세요: ");

	scanf("%s", s1); //s1이름 자체는 포인터임. 입력된 문자열이 메모리상으로
	//저장되고, 그 주소값을 s1이 가리키도록하는 것.
	
	printf("%s\n", s1);

	return 0;
}

