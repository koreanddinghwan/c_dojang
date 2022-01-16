#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Person {
	char name[20];
	int age;
};

int main()
{
	struct Person *p1 = malloc(sizeof(struct Person));

	void * ptr;

	strcpy(p1->name, "홍길동");
	p1->age = 20;

	ptr = p1;

	printf("%s %d\n", ((struct Person *)ptr)->name,((struct Person *)ptr)->age);

	free(p1);

	return 0;
}
