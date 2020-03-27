#include <stdio.h>
int main(void)
{
	int dan1;//피승수 (from)
	int dan2;//피승수 (to) 
	int is = 1;//승수 
	printf("두개의 정수를 입력하시오.\n");
	scanf("%d %d", &dan1, &dan2);
	if (dan1 < dan2)
	{
		for (; dan1 <= dan2; dan1++)
		{

			for (is = 1; is < 10; is++)
			{
				printf("%dX%d=%d\n", dan1, is, dan1 * is);
			}
		}
	}
	else if (dan2 < dan1)
	{
		for (; dan2 <= dan1; dan2++)
		{

			for (is = 1; is < 10; is++)
			{
				printf("%dX%d=%d\n", dan2, is, dan2 * is);
			}
		}
	}

}
