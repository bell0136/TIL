#include <stdio.h>
int main(void)
{
	int villa[4][2];
	int popu = 0;
	int i = 0;
	int j = 0;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d층 %d호의 인구수를 입력하시오\n", i+1,j+1);
			scanf("%d", &villa[i][j]);
		} 
	}

	for (i = 0; i < 4; i++)
	{
		popu = 0;
		popu += villa[i][0];
		popu += villa[i][1];
		printf("%d층의 인구수는 %d명입니다.\n", i+1, popu);
	}
	return 0;
}