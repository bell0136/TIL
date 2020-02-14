#include <stdio.h>
int main()
{
	int ch = 0;
	ch = getchar();
	
	if (ch >= 65 && ch <= 90) //65~90 대문자에서 소문자
	{
		ch += 32;
		putchar(ch);
	}
	else if (ch >= 97 && ch <= 122) //97~122 소문자에서 대문자
	{
		ch -= 32;
		putchar(ch);
	}
	else
	{
		printf("오류메세지\n");
	}
	return 0;
}