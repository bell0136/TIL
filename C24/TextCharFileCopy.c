#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des.txt", "wt");

	int ch;
	int i = 0;

	if (src == NULL || des == NULL)
	{
		puts("파일오픈오류");
		
	}

	while (ch = fgetc(src)!=EOF)
	{
		fputc(ch, des);
		
	}

	if (feof(src) != 0) //0이 아닌값 반환(다 복사했다는 뜻이다)
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