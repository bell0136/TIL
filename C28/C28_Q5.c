#include <stdio.h>
#pragma warning (disable : 4996)

int cmp(FILE* fp1, FILE* fp2)
{
	int ch_fp1;
	int ch_fp2;
	while (1)
	{		
		ch_fp1 = fgetc(fp1);
		ch_fp2 = fgetc(fp2);
		if (ch_fp1 != ch_fp2)
		{
			return 0;
			//0반환 시 같지않음
			//한개만 끝도달할 경우도 생각하기
		}

		if (feof(fp1) != 0 && feof(fp2) != 0)
		{
			return 1;
			//1반환 시 둘다 파일 끝 도달(일치)
		}
	}
}
int main()
{
	FILE* fp1 = fopen("d1.txt", "rt");
	FILE* fp2 = fopen("d2.txt", "rt");

	if (fp1 == NULL || fp2 == NULL)
	{
		puts("파일오픈실패");
		return -1;
	}

	if (cmp(fp1, fp2) == 1)
	{
		puts("두 파일은 완전히 일치합니다.");
	}
	else
	{
		puts("두 파일은 일치하지 않습니다.");
	}

	fclose(fp1);
	fclose(fp2);
	
	return 0;
}