#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	FILE* fp = fopen("test.txt", "wt");
	fputs("0123456890", fp);
	fclose(fp);

	fp = fopen("test.txt", "rt");
	fseek(fp, -2, SEEK_END);//EOF,0������ 9�� ����Ŵ
	putchar(fgetc(fp));

	fseek(fp, 2, SEEK_SET);//0,1�� ������ 2�� ����Ŵ 2����� ���� �����ڴ� 3�� ����Ű�� ����
	putchar(fgetc(fp));

	fseek(fp, 2, SEEK_CUR);//3�� 4�� ������ 5�� ����Ŵ
	putchar(fgetc(fp));
	return 0;
}