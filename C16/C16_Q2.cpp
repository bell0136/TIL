#include <stdio.h>
int main(void)
{
	int i = 0;
	int j = 0;
	int original[2][4] = {
		{1,2,3,4},
		{5,6,7,8}
	};
	int change[4][2] = { 0 };
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", original[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 4; i++ )
	{
		for (j = 0; j < 2; j++)
		{
			change[i][j] = original[j][i];
			printf("%d ",change[i][j]);
		}
		printf("\n");
	}
	



}