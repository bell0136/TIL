#include <stdio.h>
//�ƽ�Ű�ڵ尡 ���� ū ���ڸ� ����϶� 
int main(void)
{
	char str[50];

	int i;
	int max;
	int min;
	printf("�ܾ �Է��ϼ���\n");
	scanf("%s", str);
	max = str[0];
	min = str[0];
	
	for (i = 0; i < 50; i++)
	{
		if (str[i] != 0) {
			break;
		}

		if (max < str[i])
		{
			max = str[i];
		}
	}

	printf("�ִ�:%c", max);
}