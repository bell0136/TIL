#include <stdio.h>
int main()
{
	int ch = 0;
	ch = getchar();
	
	if (ch >= 65 && ch <= 90) //65~90 �빮�ڿ��� �ҹ���
	{
		ch += 32;
		putchar(ch);
	}
	else if (ch >= 97 && ch <= 122) //97~122 �ҹ��ڿ��� �빮��
	{
		ch -= 32;
		putchar(ch);
	}
	else
	{
		printf("�����޼���\n");
	}
	return 0;
}