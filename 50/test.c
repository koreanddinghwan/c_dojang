#include <stdio.h>

int main()
{
	int num1  = 10;
	char * ptr;
	char a[20] = "asdfasdf";
	
	ptr = a;
	
	char s1[10];
	char *s2 = "Hello";
	s1 = s2;
	printf("%s\n",s1);





	printf("%p\n", ptr);
	printf("%p\n", &a[0]);
	printf("%p\n", &a);
	printf("%s\n", ptr);
	printf("%p\n", &ptr);

	return 0;
}

