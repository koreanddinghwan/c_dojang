#include <stdio.h>
#include <string.h>


int main()
{
	char s1[20] = "안녕하세요";

	FILE *fp = fopen("hello.txt", "w");

	fwrite(s1, strlen(s1), 1,fp);

	return 0;
}
