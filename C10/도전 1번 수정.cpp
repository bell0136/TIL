#include <stdio.h>
int main(void)
{
	int dan1;//피승수 (from)
	int dan2;//피승수 (to) 
	int is = 1;//승수 
	int n = 0;
	int k = 0;
	printf("두개의 정수를 입력하시오.\n");
	scanf("%d %d", &dan1, &dan2);
	if (dan1 < dan2)
	{
		k = dan1;
		n = dan2; //큰수
	}
	if (dan2 < dan1)
	{
		k = dan2;
		n = dan1;
	}

	for (k; k <= n; k++)
	{
		for (is = 1; is < 10; is++)
		{
			printf("%d X %d = %d\n", k, is, k * is);
		}
	}
}