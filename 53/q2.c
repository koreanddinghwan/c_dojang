#include <stdio.h>
#include <stdlib.h>

struct Person {
	char name[30];
	int age;
};

int main()
{
	struct Person *p[5];//구조체 포인터 배열, 8바이트 * 5개
	int olddestNum = 0;

	for (int i = 0; i < sizeof(p) / sizeof(struct Person *); i++)//40 / 8
	{
		p[i] = malloc(sizeof(struct Person));//struct Person구조체 크기만큼 메모리할당, 4*9=36(패딩2byte)
	}

	scanf("%s %d %s %d %s %d %s %d %s %d", p[0]->name, &p[0]->age,p[1]->name,&p[1]->age,p[2]->name,&p[2]->age,p[3]->name,&p[3]->age,p[4]->name, &p[4]->age);

	for (int i = 1; i < sizeof(p) / sizeof(struct Person *); i++)
	{
		if (p[olddestNum]->age < p[i]->age)
		{
			olddestNum = i;
		}
	}

	printf("%s\n", p[olddestNum]->name);

	for (int i = 0; i < sizeof(p) / sizeof(struct Person *); i++)
    {
        free(p[i]);
    }



	return 0;
}
