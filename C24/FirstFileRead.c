#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int ch, i;
	FILE* fp = fopen("C:\\Users\\������\\source\\repos\\FirstFileWrite.c\\FirstFileWrite.c\\abc.txt", "rt");

	if (fp == NULL)
	{
		puts("���� ���� ����");
		return -1;
	}

	for (i = 0; i < 3; i++)
	{
		ch = fgetc(fp);
		printf("%c", ch);
	}
	fclose(fp);
	return 0;
}