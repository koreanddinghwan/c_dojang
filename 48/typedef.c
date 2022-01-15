#include <stdio.h>
#include <string.h>


typedef struct _Person {
	char name[20];
	int age;
	char address[100];

} Person;


int main()
{
	Person p1  = {.name = "홍길동", .age = 18, .address = "서울특별시 서대문구"};

	printf("%s\n", p1.name);
	printf("%d\n", p1.age);
	printf("%s\n", p1.address);

	struct _Person p2;
	strcpy(p2.name, "고길동");
	p2.age = 30;
	strcpy(p2.address, "서울특별시 서대문구");


	printf("%s\n", p2.name);
	printf("%d\n", p2.age);
	printf("%s\n", p2.address);

	return 0;

}
