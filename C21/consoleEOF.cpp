#include <stdio.h>
int main(void)
{
	int ch = 0;
	
	while(1)
	{
		ch = getchar();
		
		if (ch == EOF)
		{
			break;
		}
		
		putchar(ch);
		//putchar�� getchar�ٷ� �ڷ� ���� �翬�� ��µ� ���� if �ڷ� �����Ѵ�.
		//while���� ��������ν� �ѱ��ڸ� ����� �����ߴ� getchar�Լ��� �������� ���ڵ� ����� �����ϴٴ� �� �����ִ� ����
	}
	return 0;

}