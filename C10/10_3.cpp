#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:4996)

int main(void)
{
	int num1;
	int ssr1 = 1;
	int i=1;
	int j;
	int num2;
	int ssr2 = 1;

	printf("두 수를 입력하시오.\n");
	scanf("%d, %d", &num1, &num2);
	for (; ssr1 <= num1; ssr1++)
	{
		if (num1 % ssr1 != 0)
		{
			continue;
		}
		ssr2 = 1;
		for (; ssr2 <= num2; ssr2++)
		{
			if (num2 % ssr2 != 0)
			{
				continue;
			}
			if (ssr1 == ssr2)
			{	
				/*for(; i<=ssr1;i++)
					{ 
				
					}
				j=i - 1;*/				
				printf("공약수=%d\n", ssr2);
			}
		}	
	}
}


