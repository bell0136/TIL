#include <stdio.h>
#pragma warning (disable : 4996)

int cmp(FILE* fp1, FILE* fp2)
{
	int ch_fp1;
	int ch_fp2;
	while (1)
	{		
		ch_fp1 = fgetc(fp1);
		ch_fp2 = fgetc(fp2);
		if (ch_fp1 != ch_fp2)
		{
			return 0;
			//0��ȯ �� ��������
			//�Ѱ��� �������� ��쵵 �����ϱ�
		}

		if (feof(fp1) != 0 && feof(fp2) != 0)
		{
			return 1;
			//1��ȯ �� �Ѵ� ���� �� ����(��ġ)
		}
	}
}
int main()
{
	FILE* fp1 = fopen("d1.txt", "rt");
	FILE* fp2 = fopen("d2.txt", "rt");

	if (fp1 == NULL || fp2 == NULL)
	{
		puts("���Ͽ��½���");
		return -1;
	}

	if (cmp(fp1, fp2) == 1)
	{
		puts("�� ������ ������ ��ġ�մϴ�.");
	}
	else
	{
		puts("�� ������ ��ġ���� �ʽ��ϴ�.");
	}

	fclose(fp1);
	fclose(fp2);
	
	return 0;
}