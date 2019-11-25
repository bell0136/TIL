#include <stdio.h>
int main(void)
{
	int i=0;
	int num;
	printf("수를 입력하시오.\n");
	scanf("%d", &num);
	
	int a;//fibo_n
	int b;//fibo_n1
	int c;//fibo_n2

	for (i = 0; i < num; i++)
	{
		if (i == 0)
		{
			a = 0;
			printf("%d", a);
			
		}
		if (i == 1)
		{
			b = 1;
			printf(" %d", b);

		}
		if (i > 1)
		{
			c = b + a;
			printf(" %d", c);
			a = b;
			b = c;
		}	
	}
}