#include <stdio.h>
int main(void)
{
	int num1;
	int num2;
	int i = 1;
	int j = 1;

	printf("���� �Է��Ͻÿ�.\n");
	scanf("%d %d", &num1, &num2);

	printf("�����");
	for (i = num1; i > 0; i--)
	{
		for (j = num2; j > 0; j--)
		{
			if (num1 % i == 0 && num2 % j == 0)
			{
				if (i == j)
				{
					printf(" %d", j);
					break;
				}
				if (i != j)
				{
					continue;
				}
			}
			if (num1 % i != 0 || num2 % j != 0)
			{
				continue;
			}	
		}
	}	
}