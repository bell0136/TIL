#include <stdio.h>
void odd_f(int * odd_arr, int len)
{
	int i = 0;
	printf("È¦¼ö Ãâ·Â:");
	for (i = 0; i < len; i++)
	{
		if (odd_arr[i] % 2 == 0)//Â¦¼ö
		{
			continue;
		}
		
		if (odd_arr[i] % 2 == 1)//È¦¼ö
		{
			printf("%d ", odd_arr[i]);	
		}		
	}
	printf("\n");
}
void even_f(int * even_arr, int len)
{
	int i = 0;
	printf("Â¦¼ö Ãâ·Â:");
	for (i = 0; i < len; i++)
	{
		if (even_arr[i] % 2 == 0)//Â¦¼ö
		{
			printf("%d ", even_arr[i]);
		}
		
		if (even_arr[i] % 2 == 1)//È¦¼ö
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

	printf("ÃÑ 10°³ÀÇ ¼ýÀÚ ÀÔ·Â\n");
	for (i = 0; i < 10; i++)
	{
		printf("ÀÔ·Â:");
		scanf("%d", &num[i]);
	}
	odd_f(num, sizeof(num) / sizeof(int));
	even_f(num, sizeof(num) / sizeof(int));
}
