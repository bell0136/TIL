#include <stdio.h>
int main(void)
{
	int num;
	int i = 0;
	printf("수를 입력하시오\n");
	scanf("%d" , &num);
	int arr[500];
	arr[0] = 0;
	arr[1] = 1;
	if (i == 0)
	{
		printf("%d ", 0);
	}
	if (i == 1)
	{
		printf("%d ", 1);
	}
	for (i = 2; i <= num; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		printf("%d ", arr[i]);
	}
	

}