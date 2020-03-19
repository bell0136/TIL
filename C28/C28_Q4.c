#include <stdio.h>
#pragma warning (disable : 4996)
int alpha_count(FILE* fp, char alpha)
{
	int ch;
	int count_alpha = 0;
	while (1)
	{
		ch = fgetc(fp);
		if (ch == alpha)//'A'라면
		{
			while (1)
			{
				count_alpha += 1;
				ch = fgetc(fp);
				if (ch == 'SP' || ch == '\n' || ch == '\t')
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

	if (fp == NULL)
	{
		puts("파일 오픈 오류");
		return -1;
	}
	
	printf("A로 시작하는 단어의 수 : %d\n", alpha_count(fp, 'A'));
	printf("P로 시작하는 단어의 수 : %d\n", alpha_count(fp, 'P'));	

	fclose(fp);
	return 0;
}