#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

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

	while (1)
	{
		fscanf(fp, "%s", alphabet);
		
		if (alphabet[0] == 'A')
		{
			printf("A�� �����ϴ� �ܾ��� �� : %d\n", strlen(alphabet));
		}		
		else if(alphabet[0] == 'P')
		{
			printf("P�� �����ϴ� �ܾ��� �� : %d\n", strlen(alphabet));
		}

		if (feof(fp) != 0)
		{
			puts("������ ������");
			break;
		}
	}
	
	fclose(fp);
	return 0;
}