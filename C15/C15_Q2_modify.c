#include <stdio.h>
int main(void)
{
	int num;
	int i = 0;
	int j = i-1;
	int binary[50];

	printf("10���� ������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	while(1)
	{
		binary[i] = num % 2;
		num = num / 2;
		if (num == 0)
		{
			break;
		}
		i++;
	}

	for (j = i; j >= 0; j--)
	{
		printf("%d", binary[j]);
	}
}
