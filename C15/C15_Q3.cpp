#include <stdio.h>
int main(void)
{
	int num_arr[10] = {}; //�켱 �迭
	int end_arr[10] = {};
	int num;
	int i = 0;
	int idx = 0;
	int odd_idx = 0; //Ȧ��
	int even_idx = 0; //¦��

	printf("�� 10���� ���� �Է�\n");

	for (i = 0; i < 10; i++)
	{
		printf("�Է�: ");
		scanf("%d", &num_arr[i]);
	}

	for (idx = 0; idx < 10; idx++)
	{
		if (num_arr[idx] % 2 == 1)
		{
			end_arr[odd_idx] = num_arr[idx];
			odd_idx++;
		}
		if (num_arr[idx] % 2 == 0)
		{
			end_arr[9 - even_idx] = num_arr[idx];
			even_idx++;
		}
	}

	printf("�迭 ����� ���: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", end_arr[i]);
	}
}