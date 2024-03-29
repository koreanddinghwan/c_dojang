#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
};

struct Person * allocPerson()
{
	struct Person * p = malloc(sizeof(struct Person));

	strcpy(p->name, "Kayle");
	p->age = 22;

	return p;
};

int main()
{
	struct Person * p1;

	p1 = allocPerson();

	printf("%d\n", p1->age);
	printf("%s\n", p1->name);

	free(p1);

	return 0;
}
