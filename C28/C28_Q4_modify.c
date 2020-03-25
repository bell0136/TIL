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
		puts("파일 오픈 오류");
		return -1;
	}

	while (1)
	{
		fscanf(fp, "%s", alphabet);
		
		if (alphabet[0] == 'A')
		{
			printf("A로 시작하는 단어의 수 : %d\n", strlen(alphabet));
		}		
		else if(alphabet[0] == 'P')
		{
			printf("P로 시작하는 단어의 수 : %d\n", strlen(alphabet));
		}

		if (feof(fp) != 0)
		{
			puts("파일의 끝도달");
			break;
		}
	}
	
	fclose(fp);
	return 0;
}