#include <stdio.h>
int main(void)
{
	int i = 0;
	int j = 0;
	int num = 3;

	printf("%d ", 2);

	for (i = 0; i < 9; i++)
	{	
		for (j = 2; j < num; j++)
		{
			if (num % j == 0)
			{
				i--;
				break; //소수가 아니다.
			}
			if (num % j != 0)
			{
				if (j == num - 1)
				{
					printf("%d ", num);
				}
				continue; //소수이다.
			}
		}
		num++;
	}	
}