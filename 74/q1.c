#include <stdio.h>
#include <stdlib.h>

struct NODE {
	struct NODE * next;
	int data;
};

void addFirst(struct NODE * target, int data)
{
	struct NODE *newNode = malloc(sizeof(struct NODE));
	newNode->next = target->next;
	target->next = newNode;
	newNode->data = data;
}

void removeNode(struct NODE * node, int data)
{
	struct NODE * curr = node;
	while(curr->next->data != data)
	{
		curr = curr->next;
	}

	struct NODE * removeNode = curr->next;
	curr->next = removeNode->next;
	free(removeNode);

}

int main()
{
	int numArr[10] = {0,};
	int removeNum;

	scanf("%d %d %d %d %d %d %d %d %d %d",
        &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4],
        &numArr[5], &numArr[6], &numArr[7], &numArr[8], &numArr[9]
    );

	scanf("%d", &removeNum);

	struct NODE *head = malloc(sizeof(struct NODE));
	head->next = NULL;

	for (int i = 0; i < 10; i++)
	{
		addFirst(head, numArr[i]);
	}

	removeNode(head, removeNum);

	struct NODE * curr = head->next;

	while (curr != NULL)
	{
		printf("%d ", curr->data);
		curr = curr->next;
	}

	curr = head->next;
	while (curr != NULL)
	{
		struct NODE * next = curr->next;
		free(curr);
		curr = next;
	}

	free(head);

	return 0;
}


