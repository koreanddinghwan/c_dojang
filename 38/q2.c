#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m,n;

	scanf("%d %d", &m, &n);
	
	//2차원 배열을 포인터로 이용하려면 이중포인터를 사용해야함.
	//이중포인터는 포인터 변수를 가리키는 포인터변수.
	char **matrix = malloc(sizeof(char *) * m); 
	//가로줄 가리키는 char형 이중 포인터에 *char(char형 포인터)를 가로줄m개만큼 할당


	//세로줄 메모리할당
	for (int i = 0; i < n; i++)
	{
		matrix[i] = malloc(sizeof(char) * n + 1); //char 데이터를 n개만큼 받고, null문자 한개더 추가
	}
	
	
	//사용자로부터 값 입력받아서 포인터에 접근해 저장하기.
	for (int i = 0; i < m; i++)
	{
		scanf("%s", matrix[i]); //%s로 입력받은 문자열은 메모리 어딘가에 저장됨. 이 문자열은 주소값을 반환함.
		//따라서, matrix[i]가 가리키는 주소에 이 문자열의 주소를 넘겨주면됨.
	}
	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//해당 매트릭스가 지뢰면 출력하고 넘어감
			if (matrix[i][j] == '*')
			{
				printf("*");
				continue;
			}

			//지뢰가 아니면 주변땅 체크
			int count = 0;

			//i는 위아래, 1작은곳 1큰곳
			for (int y = i - 1; y <= i + 1; y++)
			{
				//j는 양옆, 1작은곳 1큰곳
				for (int x = j - 1; x <= j + 1; x++)
				{
					//0보다 크거나, 입력된 가로세로폭보다 크거나같으면(인덱스니까)다음 체크로 넘어감
					if (y < 0 || x < 0|| y >= m || x >= n)
						continue;

					if (matrix[y][x] == '*')
					{
						count++;
					}
				}
			}
			printf("%d", count);

		}
		printf("\n");
	}
	
	//메모리할당 해제
	for (int i = 0; i < m; i++)
	{
		free(matrix[i]);
	}

	free(matrix);

	return 0;
}


		

