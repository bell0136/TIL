#include <stdio.h>
#pragma warning (disable :4996)
int filesize(FILE* fp)
{
	int size = 0;
	int pos = 0;
	
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	
	return size;
}
int main()
{
	FILE* fp = fopen("text.txt", "wt");
	fputs("hello world~", fp);
	fclose(fp);

	fp =fopen("text.txt", "rt");
	printf("������ ũ��� %d byte�Դϴ�.", filesize(fp));
	fclose(fp);
	return 0;

}