#include <stdio.h>

void printFullName(char * familyname, char * givenname)
{
	printf("%s", familyname);
	printf("%s\n", givenname);
}

int main()
{
	char familyname[31];
	char givenname[31];
	scanf("%s %s", familyname, givenname);
	printFullName(familyname,givenname);

	return 0;
}
