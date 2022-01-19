#include <stdio.h>
#include <stdlib.h>

struct NODE {
	struct NODE * next;
	int data;
};

void addFirst(struct NODE * target, int data)
{
	struct NODE * newNode = malloc(sizeof(struct NODE));

	newNode->next = target->next;
	target->next = newNode;

	newNode->data = data;
}

struct NODE *findNode(struct NODE * node, int data)
{
	struct NODE * curr = node;
	while(curr != NULL)
	{
		if (curr->data == data)
		{
			break;
		}
		curr = curr->next;
	}

	return curr;
}


int main()
{
    struct NODE *head = malloc(sizeof(struct NODE));
    head->next = NULL;

    addFirst(head, 10);
    addFirst(head, 20);
    addFirst(head, 30);

    struct NODE *found = findNode(head, 20);
    printf("%d\n", found->data);

    struct NODE *curr = head->next;
    while (curr != NULL)
    {
        struct NODE *next = curr->next;
        free(curr);
        curr = next;
    }

    free(head);

    return 0;
}




