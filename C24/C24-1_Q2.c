#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	FILE* plusfile = fopen("C:\\Users\\HE\\source\\repos\\C24-1_Q1\\C24-1_Q1\\mystory.txt", "at");
	if (plusfile == NULL)
	{
		puts("���Ͽ��¿���");
		return -1;
	}
	fputs("#�����ϴ� ���� : ġŲ", plusfile);
	fputc('\n', plusfile);
	fputs("#��� : ����", plusfile);
	fputc('\n', plusfile);

	fclose(plusfile);
	return 0;
}