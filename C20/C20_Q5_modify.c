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
	
	char * rspstr[4] = {"","����","����","��"};
	char* comrspstr[4] = {"", "����","����","��" };
	for (i = 0; i < 3; i++)
	{
		printf("������ 1, ������ 2, ���� 3:");
		scanf("%d", &rsp);
		srand((int)time(NULL));
		int random = rand() % 3 + 1;

		if (rsp == 1 && random == 3)
		{
			printf("����� %s ����, ��ǻ�ʹ� %s ����, �����ϴ�.\n", rspstr[rsp], comrspstr[random]);
			lose += 1;
		}
		else if (rsp == 3 && random == 1)
		{
			printf("�����  %s ����, ��ǻ�ʹ�  %s ����, ����� �̰���ϴ�.\n", rspstr[rsp], comrspstr[random]);
			win += 1;
		}
		else if (rsp < random)
		{
			printf("�����  %s ����, ��ǻ�ʹ�  %s ����, ����� �̰���ϴ�.\n", rspstr[rsp], comrspstr[random]);
			win += 1;
		}
		else if (rsp > random)
		{
			printf("�����  %s ����, ��ǻ�ʹ�  %s ����, ����� �����ϴ�.\n", rspstr[rsp], comrspstr[random]);
			lose += 1;
		}		
		else if (rsp == random)
		{
			printf("����� %s ����, ��ǻ�ʹ� %s ����, �����ϴ�.\n", rspstr[rsp], comrspstr[random]);
			tie += 1;
		}
	}

	printf("\n������ ��� : %d �� %d �� %d ��", win, tie, lose);
}