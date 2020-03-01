#include <stdio.h>
void DesSort(int* order_arr, int len)
{
	int i = 0;
	int temp;
	for (len; len > 1; len--)
	{
		for (i = 0; i < len; i++)
		{
			if (order_arr[i] < order_arr[i + 1])
			{
				temp = order_arr[i];
				order_arr[i] = order_arr[i + 1];
				order_arr[i + 1] = temp;
			}
		}
	}
}
int main(void)
{
	int order_arr[7] = { 0 };
	int i = 0;
	int len = sizeof(order_arr) / sizeof(int);
	for (i = 0; i < len; i++)
	{
		printf("ют╥б: ");
		scanf("%d", &order_arr[i]);
	}
	DesSort(order_arr, len);

	printf("\n");
	for (i = 0; i < len; i++)
	{
		printf("%d ", order_arr[i]);
	}
}