#include <stdio.h>
void Palindrome(int count, char * str, int len)
{
	int j = 0;
	for (j = 0; j < count; j++)
		{
			if (str[j] == str[len - 1 - j])//-1�� �ϴ� ������ ���ڿ��� 0���� �����ϹǷ�
			{
				if (j == count-1)
				{
					printf("ȸ���Դϴ�.\n");
				}
			}
		}
}
int main(void)
{
	char str[50] = {};
	int len = 0;
	int count = 0; //�迭�� ���
	int j = 0; //�迭�� ���

	printf("���ڿ��Է�: \n");
	scanf("%s", str);

	while (str[len] != '\0')
	{
		len++;
	}// len == ���� �� ����, ������ 1�� ���������� 0���� �����ϹǷ� �׳� ���д�.
	
	count = len / 2;
	Palindrome(len / 2, str, len);	
}