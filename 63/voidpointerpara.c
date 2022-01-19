#include <stdio.h>

enum TYPE {
	TYPE_CHAR,
	TYPE_INT,
	TYPE_FLOAT,
};

void swapValue(void * ptr1, void * ptr2, enum TYPE t)
{
	switch (t)
	{
		case TYPE_CHAR:
			{
				char temp;
				temp = *(char *)ptr1;//char로 형변환 후 값 참조
				*(char *)ptr1 = *(char *)ptr2;//void포인터들을 각각 char로 형변환 후 값을 할당
				*(char *)ptr2 = temp;//temp에 저장된 값을 ptr2 void포인터 할당
				break;
			}
		case TYPE_INT:
			{
				int temp;
				temp = *(int *)ptr1;
				*(int *)ptr1 = *(int *)ptr2;
				*(int *)ptr2 = temp;
				break;
			}
		case TYPE_FLOAT:
			{
				float temp;
				temp = *(float *)ptr1;
				*(float *)ptr1 = *(float *)ptr2;
				*(float *)ptr2 = temp;
				break;
			}
	}

}

int main()
{
	char c1 = 'a';
	char c2 = 'b';

	swapValue(&c1, &c2, TYPE_CHAR);
	printf("%c %c\n", c1, c2);

	int num1 = 10;
	int num2 = 20;

	swapValue(&num1, &num2, TYPE_INT);
	printf("%d %d\n", num1, num2);

	float num3 = 1.234454f;
	float num4 = 7.564321f;

	swapValue(&num3, &num4, TYPE_FLOAT);
	printf("%f %f\n", num3, num4);

	return 0;
}




