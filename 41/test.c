#include <stdio.h>

void print_nospace(char *);
int main()
{
	print_nospace("hello world\n");
	print_nospace("Hello, my name is asdfas\n");


}
void print_nospace(char * str)
{
	for(int i =0;str[i] !='\0'; i++)
	{
		if(str[i] != ' ')
			printf("%c", str[i]);
	}
}

