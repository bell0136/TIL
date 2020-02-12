#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	int i = 0;
	int j = 0;
	srand((int)time(NULL));
	int random[3] = { rand() % 9,rand() % 9,rand() % 9 };
	int num[3] = { 0 };

	int strike = 0;
	int ball = 0;

	printf("Start Game\n");
	for (j = 0; j < 3; j++)
	{
		printf("%d", random[i]);
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		printf("3개의 숫자 선택 : \n");
		scanf("%d %d %d", &num[0], &num[1], &num[2]);
		/*if (random[i] == num[i])
		{
			strike += 1;
		}
		if (random == num);
		{
			ball += 1;
		}
		printf("%d strike, %d ball\n", strike, ball);
		*/
		if (strike == 3)
		{
			printf("Game Over!\n");
		}		
	}
}