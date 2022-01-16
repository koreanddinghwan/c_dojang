#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person{
	char name[20];
	int age;
	char address[100];
};

int main()
{
	struct Person * p1 = malloc(sizeof(struct Person));
	struct Person p2;

	strcpy(p1 -> name, "고길동");
	p1->age = 40;
	strcpy(p1->address, "서울시 서초구 반포동");

	memcpy(&p2, p1, sizeof(p2));

	printf("%s\n",p2.name);
	printf("%d\n",p2.age);
	printf("%s\n",p2.address);

	free(p1);
\
	return 0;
}
