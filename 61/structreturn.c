#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

struct Person getPerson()
{
	struct Person p;

	strcpy(p.name, "길동");

	p.age = 30;

	strcpy(p.address, "한남동");

	return p;
}

int main()
{
	struct Person p1;

	p1 = getPerson();

	printf("이름: %s\n", p1.name);
	printf("나이: %d\n", p1.age);
	printf("주소: %s\n", p1.address);

	return 0;
}

