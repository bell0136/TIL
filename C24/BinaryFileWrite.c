#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	FILE* fp = fopen("src.bin", "wt");
	int ch;
	if (fp == NULL)
	{
		puts("파일오픈오류");
		return -1;
	}


	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);

	fclose(fp);

	return 0;
}
