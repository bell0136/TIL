#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	FILE* fp = fopen(".\\test2.txt", "wt");
	if (fp == NULL)
	{
		puts("파일 오픈실패");
		return -1;
	}
	fputc(65, fp);
	fputc(94, fp);
	fputc(97, fp);
	fflush(fp);
	fclose(fp); //스트림의 종료
	return 0;
}