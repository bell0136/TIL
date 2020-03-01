#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i = 0;
	int j = 0;
	int rsp = 0;

	int win = 0;
	int lose = 0;
	int tie = 0;
	
	char * rspstr[4] = {"","바위","가위","보"};
	char* comrspstr[4] = {"", "바위","가위","보" };
	for (i = 0; i < 3; i++)
	{
		printf("바위는 1, 가위는 2, 보는 3:");
		scanf("%d", &rsp);
		srand((int)time(NULL));
		int random = rand() % 3 + 1;

		if (rsp == 1 && random == 3)
		{
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 졌습니다.\n", rspstr[rsp], comrspstr[random]);
			lose += 1;
		}
		else if (rsp == 3 && random == 1)
		{
			printf("당신은  %s 선택, 컴퓨터는  %s 선택, 당신이 이겼습니다.\n", rspstr[rsp], comrspstr[random]);
			win += 1;
		}
		else if (rsp < random)
		{
			printf("당신은  %s 선택, 컴퓨터는  %s 선택, 당신이 이겼습니다.\n", rspstr[rsp], comrspstr[random]);
			win += 1;
		}
		else if (rsp > random)
		{
			printf("당신은  %s 선택, 컴퓨터는  %s 선택, 당신이 졌습니다.\n", rspstr[rsp], comrspstr[random]);
			lose += 1;
		}		
		else if (rsp == random)
		{
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다.\n", rspstr[rsp], comrspstr[random]);
			tie += 1;
		}
	}

	printf("\n게임의 결과 : %d 승 %d 무 %d 패", win, tie, lose);
}