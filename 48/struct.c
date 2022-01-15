#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};


int main()
{
	struct Person p1; //p1이라는 person의 구조체 변수 선언
	
	strcpy(p1.name, "홍길동");
	p1.age = 18;
	strcpy(p1.address, "서울 특별시 서대문구");
	
	printf("%s\n", p1.name);
	printf("%d\n", p1.age);
	printf("%s\n", p1.address);


	return 0;
}


