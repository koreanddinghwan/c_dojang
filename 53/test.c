#include <stdio.h>
#include <stdlib.h>

struct Person {
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
};

int main(){
	struct Person p1;
	struct Person * ptr;

	printf("%lu\n", sizeof(ptr));
	printf("%lu\n", sizeof(struct Person));
	printf("%lu\n", sizeof(struct Person *));

	return 0;
}
