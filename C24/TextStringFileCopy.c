#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	char ch[20];
	char ch1;

	if (src == NULL || des == NULL)
	{
		puts("���� ���� ����");	
		return -1;
	}
	while (fgets(ch, sizeof(ch), src))
	{
		fputs(ch, des);
	}

	if (feof(src) != 0)
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