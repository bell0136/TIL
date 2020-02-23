#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	FILE* fp = fopen("test.txt", "wt");
	fputs("0123456890", fp);
	fclose(fp);

	fp = fopen("test.txt", "rt");
	fseek(fp, -2, SEEK_END);//EOF,0지나서 9를 가리킴
	putchar(fgetc(fp));

	fseek(fp, 2, SEEK_SET);//0,1을 지나서 2를 가리킴 2출력후 파일 지시자는 3을 가리키고 있음
	putchar(fgetc(fp));

	fseek(fp, 2, SEEK_CUR);//3과 4를 지나서 5를 가리킴
	putchar(fgetc(fp));
	return 0;
}