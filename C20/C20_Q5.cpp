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
	
	for (i = 0; i < 3; i++)
	{
		printf("바위는 1, 가위는 2, 보는 3:");
		scanf("%d", &rsp);	
		srand((int)time(NULL));
		int random = rand() % 3 + 1;

		if (rsp == 1 && random == 3)
		{
			printf("당신은 바위 선택, 컴퓨터는 보 선택, 당신이 졌습니다.\n");
			lose += 1;
		}
		else if (rsp == 2 && random == 3)
		{
			printf("당신은 가위 선택, 컴퓨터는 보 선택, 당신이 이겼습니다.\n");
			win += 1;
		}
		else if (rsp == 3 && random == 3)
		{
			printf("당신은 보  선택, 컴퓨터는 보 선택, 비겼습니다.\n");
			tie += 1;
		}
		else if (rsp == 1 && random == 2)
		{
			printf("당신은 바위 선택, 컴퓨터는 가위 선택, 당신이 이겼습니다.\n");
			win += 1;
		}
		else if (rsp == 2 && random == 2)
		{
			printf("당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다.\n");
			tie += 1;
		}
		else if (rsp == 3 && random == 2)
		{
			printf("당신은 보 선택, 컴퓨터는 가위 선택, 당신이 졌습니다.\n");
			lose += 1;
		}
		else if (rsp == 1 && random == 1)
		{
			printf("당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다.\n");
			tie += 1;
		}
		else if (rsp == 2 && random == 1)
		{
			printf("당신은 가위 선택, 컴퓨터는 바위 선택, 당신이 졌습니다.\n");
			lose += 1;
		}
		else if (rsp == 3 && random == 1)
		{
			printf("당신은 보 선택, 컴퓨터는 바위 선택, 당신이 이겼습니다.\n");
			win += 1;
		}
	}

	printf("\n게임의 결과 : %d 승 %d 무 %d 패", win, tie, lose);
}