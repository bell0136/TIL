#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	int num4 = 40;

	int arr2d[2][4] = 
	{
		{1,2,3,4},{5,6,7,8} 
	};
	int* whoA[4] = { &num1, &num2, &num3, &num4 }; //포인터배열 (포인터의 배열)
	int(*whoB)[4] = arr2d; //(배열 포인터)
	int i = 0;
	int j = 0;

	printf("%d %d %d %d\n", *whoA[0], *whoA[1], *whoA[2], *whoA[3]);

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", whoB[i][j]);
		}
		printf("\n");
	}

	return 0;
}