#include <stdio.h>
#include <stdlib.h>
int main()
{
	int **m = malloc(sizeof(int *) * 3);
	//이중포인터 m에 int포인터의 크기의 3개만큼 메모리할당(세로줄 3개)
	
	for (int i = 0; i < 3; i++)
	{
		m[i] = malloc(sizeof(int) * 4);
		//세로줄 각 줄에 int 자료형의 크기 * 4개만큼 메모리할당(가로줄 4개)
	}

	m[0][0] = 1;
	m[2][0] = 5;
	m[2][3] = 2;

	printf("%d\n", m[0][0]);
	printf("%d\n", m[2][0]);
	printf("%d\n", m[2][3]);


	for (int i = 0; i < 3; i++)
	{
		free(m[i]);
		//각 가로공간의 메모리 해제
	}
	free(m); //세로공간 메모리 해제


	return 0;
}

