#include <stdio.h>
int main(void)
{
	int gugudan[3][9] = { 0 };
	int dan = 1;
	int idx = 0;

	for (dan = 0; dan < 3; dan++)
	{
		idx = 0;
		for (idx = 0; idx < 9; idx++)
		{
			gugudan[dan][idx] = (dan+2) * (idx+1);
		}
	}

	for (dan = 0; dan < 3; dan++)
	{
		for (idx = 0; idx < 9; idx++)
		{
			printf("%d ", gugudan[dan][idx]);
		}
		printf("\n");
	}
	//구구단할 때 idx와 배열요소순서 헷갈리지 말것
}