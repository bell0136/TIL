#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	FILE* fp = fopen("simple.txt", "rt");
	int ch;
	char str[20];

	if (fp == NULL)
	{
		puts("파일 오픈 오류");
		return -1;
	}
	
	ch = fgetc(fp);
	printf("%c\n", ch);
	
	fgets(str,sizeof(str),fp);
	printf("%s\n", str);
	
	fclose(fp);
	
	return 0;
}