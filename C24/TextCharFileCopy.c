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
		puts("���Ͽ��¿���");
		
	}

	while (ch = fgetc(src)!=EOF)
	{
		fputc(ch, des);
		
	}

	if (feof(src) != 0) //0�� �ƴѰ� ��ȯ(�� �����ߴٴ� ���̴�)
	{
		puts("���Ϻ���Ϸ�");
	}
	else 
	{
		puts("���Ϻ������");
	}
	fclose(src);
	fclose(des);

	return 0;


}