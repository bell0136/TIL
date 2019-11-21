#include <stdio.h>
int main(void)
{
	int a = 0;
	int num;
	int sum = 0;
	int i;
	int b = 0;
	int total = 0;
	printf("numÀÔ·Â\n");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		if (i == 0)
		{
			a = 0;
			printf("%d", a);
		}
		if (i == 1)
		{
			a = 1;
			printf(" %d", a);
		}
		if (i == 2)
		{
			sum += a;
			a = sum;
			printf(" %d", sum);
		}
		if (i > 2)
		{
			if (i == 3 && b == 0)
			{
				sum += a - b;//b=0
				printf(" %d", sum);
				b++;
			}
			if (i == 4 && b == 1)
			{
				a = sum;
				sum += a - b;//b=1
				total = b;
				printf(" %d", sum);
			}
			if (i == 5 && b == 1)
			{
				a = sum;
				sum += a - b;//b=1
				total = b;
				printf(" %d", sum);
			}
			if (i >5 && b >= 1)
			{
				a = sum;		
				total += b;	
				b = total;
				sum += a;
				sum -= total;
				printf(" %d", sum);
			}
		}
	}
}