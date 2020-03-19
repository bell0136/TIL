#include <stdio.h>
#pragma warning (disable : 4996)
int alpha_count(FILE* fp, char alpha)
{
	int ch;
	int count_alpha = 0;
	
	while (1)
	{
		ch = fgetc(fp);
		if (ch == alpha)//'A'���
		{
			while (1)
			{				
				count_alpha += 1;
				ch = fgetc(fp);				
				if (ch == 32 || ch == 10 || ch == 9)
				{				
					return count_alpha;
				}
			}
		}
	}
}

int main(void)
{
	FILE* fp = fopen("wordcnt.txt", "rt");

	if (fp == NULL)
	{
		puts("���� ���� ����");
		return -1;
	}

	printf("A�� �����ϴ� �ܾ��� �� : %d\n", alpha_count(fp, 'A'));
	printf("P�� �����ϴ� �ܾ��� �� : %d\n", alpha_count(fp, 'P'));

	fclose(fp);
	return 0;
}