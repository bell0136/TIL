#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main(void)
{
	char str1[20];
	char str2[20];

	printf("���ڿ�1 �Է� : \n");
	scanf("%s", str1);
	printf("���ڿ�2 �Է� : \n");
	scanf("%s", str2);

	if (!strcmp(str1, str2))//0�� ������ �ǹ��ϹǷ� 1��ȯ
	{
		puts("�� ���ڿ��� �����մϴ�");
	}
	else
	{
		puts("�� ���ڿ��� �������� �ʽ��ϴ�");
		if (!strncmp(str1, str2, 3))
		{
			puts("������ ���� 3���ڴ� �����մϴ�.");
		}
	}
	return 0;

}