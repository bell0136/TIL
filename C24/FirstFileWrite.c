#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	FILE* fp = fopen(".\\test2.txt", "wt");
	if (fp == NULL)
	{
		puts("���� ���½���");
		return -1;
	}
	fputc(65, fp);
	fputc(94, fp);
	fputc(97, fp);
	fflush(fp);
	fclose(fp); //��Ʈ���� ����
	return 0;
}