#include <stdio.h>
int main(void)
{
	int num;
	int i = 0;
	int j = i-1;
	int binary[50] = {};

	printf("10진수 정수 입력: ");
	scanf("%d", &num);

	for (i = 0; i < 10; i++)
	{
		binary[i] = num % 2;
		num = num / 2;
		if (num == 0)
		{
			break;
		}
	}

	for (j = i; j >= 0; j--)
	{
		printf("%d", binary[j]);
	}
}