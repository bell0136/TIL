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
	char alphabet[20];
	long here; 
	int i = 0;
	if (fp == NULL)
	{
		puts("���� ���� ����");
		return -1;
	}


	printf("A�� �����ϴ� �ܾ��� �� : %d\n", alpha_count(fp, 'A'));
	fseek(fp, 0 ,SEEK_SET);
	printf("P�� �����ϴ� �ܾ��� �� : %d\n", alpha_count(fp, 'P'));

	fclose(fp);
	return 0;
}