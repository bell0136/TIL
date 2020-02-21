#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	char ch[20];
	char ch1;

	if (src == NULL || des == NULL)
	{
		puts("파일 오픈 실패");	
		return -1;
	}
	while (fgets(ch, sizeof(ch), src))
	{
		fputs(ch, des);
	}

	if (feof(src) != 0)
	{
		puts("파일복사완료");
	}
	else
	{
		puts("파일복사실패");
	}
	
	fclose(src);
	fclose(des);

	return 0;

}