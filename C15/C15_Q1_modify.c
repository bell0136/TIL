#include <stdio.h>
void odd_f(int* num_arr, int len)
{
	int i = 0;
	int j = 0;
	int odd_index = 0;
	int odd_arr[50];
	printf("Ȧ�� ���:");
	for (i = 0; i < len; i++)
	{
		if (num_arr[i] % 2 == 0)//¦��
		{
			continue;
		}

		if (num_arr[i] % 2 == 1)//Ȧ��
		{
			odd_arr[j] = num_arr[i];
			j++;
		}
	}
	for (odd_index = 0; odd_index < j; odd_index++)
	{
		printf("%d", odd_arr[odd_index]);
		if (odd_index != j-1)
		{
			printf(",");
		}
	}
		
	printf("\n");
}
void even_f(int* num_arr, int len)
{
	int i = 0;
	int j = 0;
	int even_index = 0;
	int even_arr[50];
	printf("¦�� ���:");
	for (i = 0; i < len; i++)
	{
		if (num_arr[i] % 2 == 0)//¦��
		{
			even_arr[j] = num_arr[i];
			j++;
		}

		if (num_arr[i] % 2 == 1)//Ȧ��
		{
			continue;
		}
		
	}
	for (even_index = 0; even_index < j; even_index++)
	{
		printf("%d", even_arr[even_index]);
		if (even_index != j-1)
		{
			printf(",");
		}
	}

	printf("\n");
}

int main(void)
{
	int num[10];
	int i = 0;

	printf("�� 10���� ���� �Է�\n");
	for (i = 0; i < 10; i++)
	{
		printf("�Է�:");
		scanf("%d", &num[i]);
	}
	odd_f(num, sizeof(num) / sizeof(int));
	even_f(num, sizeof(num) / sizeof(int));
}