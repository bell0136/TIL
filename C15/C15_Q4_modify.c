#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[50];
	int len = 0;
	int count = 0; //�迭�� ���
	int j = 0; //�迭�� ���
	int check = 0;
	printf("���ڿ��Է�: \n");
	scanf("%s", str);

	len = strlen(str);
	count = len / 2;

	for (j = 0; j < count; j++)
	{
		if (str[j] == str[len - 1 - j])//-1�� �ϴ� ������ ���ڿ��� 0���� �����ϹǷ�
		{
			check = 1;
			if (j == count - 1)
			{
				printf("ȸ���Դϴ�.\n");
			}
		}
		else
		{
			check = 0;
		}
		if (check == 0)
		{
			break;
		}
	}
	return 0;
}