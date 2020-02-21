#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	FILE* src = fopen("src.txt", "wt");
	
	int ch;
	int i = 0;

	if (src == NULL )
	{
		puts("파일오픈오류");

	}

	fputs("this is source file.", src);
	fclose(src);
	

	return 0;


}