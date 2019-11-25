#include <stdio.h>
int main(void)
{
	int i=0;
	int num;
	printf("수를 입력하시오.\n");
	scanf("%d", &num);
	
	int fibo_n;//fibo_n
	int fibo_n1;//fibo_n1
	int fibo_n2;//fibo_n2

	for (i = 0; i < num; i++)
	{
		if (i == 0)
		{
			fibo_n = 0;
			printf("%d", fibo_n);
			
		}
		if (i == 1)
		{
			fibo_n1 = 1;
			printf(" %d", fibo_n1);

		}
		if (i > 1)
		{
			fibo_n2 = fibo_n1 + fibo_n;
			printf(" %d", fibo_n2);
			fibo_n = fibo_n1;
			fibo_n1 = fibo_n2;
		}	
	}
}