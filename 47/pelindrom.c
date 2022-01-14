#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char * word = malloc(sizeof(char) * 30 + 1); //30개의 문자
	int length;
	bool isPalindrome = true;

	printf("단어를 입력해주세요 : ");
	scanf("%s", word);

	length = strlen(word);

	if (length % 2 == 0)
	{
		for (int i = 0; i <= length / 2 - 1;i++)
		{
			if (word[i] != word[length - 1 - i])
			{
				isPalindrome = false;
				break;
			}
		}
	} else {

		for (int i = 0; i < length / 2; i++)
		{
			if (word[i] != word[length -1 -i])
			{
				isPalindrome = false;
				break;
			}
		}
	}
	
	printf("%d", isPalindrome);

	free(word);	


	return 0;
}

