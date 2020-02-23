#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	FILE* fp = fopen("test2.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);

	fp = fopen("test2.txt", "rt");

	int i = 0;
	int pos;
	for (i = 0; i < 4; i++)
	{
		putchar(fgetc(fp));
		pos = ftell(fp);
		//printf("%d\n", pos);
		fseek(fp, -1, SEEK_END);
		putchar(fgetc(fp));
		fseek(fp, pos, SEEK_SET);

	}
	return 0;
}