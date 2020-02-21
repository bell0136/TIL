#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	FILE* plusfile = fopen("C:\\Users\\HE\\source\\repos\\C24-1_Q1\\C24-1_Q1\\mystory.txt", "at");
	if (plusfile == NULL)
	{
		puts("파일오픈오류");
		return -1;
	}
	fputs("#좋아하는 음식 : 치킨", plusfile);
	fputc('\n', plusfile);
	fputs("#취미 : 독서", plusfile);
	fputc('\n', plusfile);

	fclose(plusfile);
	return 0;
}