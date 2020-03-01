#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	srand((int)time(NULL));
	int random[3] = { rand() % 9,rand() % 9,rand() % 9 };
	int num[3] = { 0 };
	int strike = 0;
	int ball = 0;

	if (random[0] == random[1] || random[1] == random[2] || random[0] == random[2])
	{
		return 0;
	}
	
	printf("Start Game\n");
	for (j = 0; j < 3; j++)
	{
		printf("%d", random[j]);
	}
	printf("\n");

	j = 0;

	while (1)
	{
		strike = 0;
		ball = 0;
		printf("\n3개의 숫자선택:");
		scanf("%d %d %d", &num[0], &num[1], &num[2]);
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (i == j && num[i] == random[j])
				{
					strike += 1;
					if (strike == 3)
					{
						printf("\n%d번째 도전 결과: 3 strike! \n", k + 1);
						printf("Game Over\n");
						return 0;
					}
				}
				else if (i != j && num[i] == random[j])
				{
					ball += 1;
				}
			}
		}

		printf("\n%d번째 도전 결과: %d strike, %d ball\n", k + 1, strike, ball);
		k++;
	}
}