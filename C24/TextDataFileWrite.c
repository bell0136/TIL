#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	FILE* fp = fopen("simple.txt", "wt");
	if (fp == NULL)
	{
		puts("���� ����");
	}
	fputc('A', fp);
	fputc('\n', fp);
	fputs("I'm your father", fp);

}