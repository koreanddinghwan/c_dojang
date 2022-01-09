#include <stdio.h>

int main() {
	
	char drink;

	scanf("%c", &drink);

	switch (drink){
		case 'f':
			printf("환타\n");
			break;
		case 'c':
			printf("콜라\n");
			break;
		case 'p':
			printf("포카리스웨트\n");
			break;
		default:
			printf("판매하지 않는 메뉴");
	}

	return 0;
}
