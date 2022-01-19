#include <stdio.h>
#include <stdlib.h>

struct NODE {
	struct NODE * next;
	int data;
};

void addFirst(struct NODE * target, int data)
{
	struct NODE * newNode = malloc(sizeof(struct NODE));

	newNode->next = target->next; //새 노드에 원래 노드의 다음 노드주소주기
	newNode->data = data;

	target->next = newNode;//원래 노드에 새 노드의 주소 주기
}

int main()
{
	struct NODE * head = malloc(sizeof(struct NODE));

	head->next = NULL;

	addFirst(head, 100);
	addFirst(head, 20);
	addFirst(head, 30);

	struct NODE * curr = head->next;

	while (curr != NULL)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}

	while (curr != NULL)
	{
		struct NODE * next = curr->next;
		free(curr);
		curr = next;
	}

	free(head);

	return 0;
}
