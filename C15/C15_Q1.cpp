#include <stdio.h>
void odd_f(int * odd_arr, int len)
{
	int i = 0;
	printf("Ȧ�� ���:");
	for (i = 0; i < len; i++)
	{
		if (odd_arr[i] % 2 == 0)//¦��
		{
			continue;
		}
		
		if (odd_arr[i] % 2 == 1)//Ȧ��
		{
			printf("%d ", odd_arr[i]);	
		}		
	}
	printf("\n");
}
void even_f(int * even_arr, int len)
{
	int i = 0;
	printf("¦�� ���:");
	for (i = 0; i < len; i++)
	{
		if (even_arr[i] % 2 == 0)//¦��
		{
			printf("%d ", even_arr[i]);
		}
		
		if (even_arr[i] % 2 == 1)//Ȧ��
		{
			continue;
		}
		
	}
	printf("\n");
}

int main(void)
{
	int num[10] = {};
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
