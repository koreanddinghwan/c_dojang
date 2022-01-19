#include <stdio.h>
#include <stdlib.h>

struct NODE {
	struct NODE * next; //다음노드 주소 저장 포인터
	int data; //데이터 저장 멤버
};

int main() {
	
	struct NODE * head = malloc(sizeof(struct NODE)); //구조체 포인터. head
	


	struct NODE * node1 = malloc(sizeof(struct NODE));
	head->next = node1; //head구조체포인터의 멤버포인터변수 next에 다음 노드의 포인터주소로 node1 저장
	node1 -> data = 10; 

	struct NODE * node2 = malloc(sizeof(struct NODE));
	node1->next = node2;
	node2->data = 20;

	struct NODE * node3 = malloc(sizeof(struct NODE));
	node2->next = node3;
	node3->next = NULL;
	node3->data = 30;

	struct NODE * curr = node1; //연결리스트 순회용포인터, node1주소임head->next.
	while(curr != NULL)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}

	free(node2);    // 노드 메모리 해제
    free(node1);    // 노드 메모리 해제
    free(node3);
	free(head);     // 머리 노드 메모리 해제

    return 0;
}
	


