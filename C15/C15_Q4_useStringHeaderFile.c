#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[50];
	int len = 0;
	int count = 0; //�迭�� ���
	int j = 0; //�迭�� ���

	printf("���ڿ��Է�: \n");
	scanf("%s", str);

	len = strlen(str);
	count = len / 2;

	for (j = 0; j < count; j++)
	{
		if (str[j] == str[len - 1 - j])//-1�� �ϴ� ������ ���ڿ��� 0���� �����ϹǷ�
		{
			if (j == count - 1)
			{
				printf("ȸ���Դϴ�.\n");
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}