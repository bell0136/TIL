#include <stdio.h>
int main(void)
{
	int num1;
	int num2;
	int i = 1;
	int j = 1;
	int check = 0;
	printf("수를입력하시오.\n");
	scanf("%d %d", &num1, &num2);

	printf("출력\n");
	for (i = num1; i > 0; i--)
	{
		for (j = num2; j > 0; j--)
		{
			if (num1 % i == 0 && num2 % j == 0)
			{
				if (i == j)
				{
					printf("%d ", j);
					check = 1;
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
		if (check == 1)
		{
			break;
		}
	}
	return 0;
}