#include <stdio.h>
char alpabet(int* orderarr)
{
	char i, j, k;
	int l = 0;
	for (l = 0; l < 3; l++)
	{
		if (orderarr[l] == 0)
		{
			return k;
		}
		else if (orderarr[l] == 1)
		{
			return j;
		}
		else if (orderarr[l] == 2)
		{
			return i;
		}
	}
}
int* ThreeToOne(int* depth, int* order, int(*arr_3d)[3][4])
{
	static int arr_1d[24] = { 0 }; //반환할 배열의 경우 static붙이자ㅠㅠ

	int num = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	
	for (i = 0; i < depth[order[2]]; i++)
	{
		for (j = 0; j < depth[order[1]]; j++)
		{
			for (k = 0; k < depth[order[0]]; k++)
			{
				
				//printf("%d ", arr_3d[k][j][i]);
				printf("%d ", arr_3d[alpabet(order)][alpabet(order)][alpabet(order)]);
				arr_1d[num] = arr_3d[alpabet(order)][alpabet(order)][alpabet(order)];
				num++;
			}
		}
	}
	printf("\n");
	for (num = 0; num < 24; num++)
	{
		printf("%d ", arr_1d[num]);
	}

	return arr_1d;
}
int main(void)
{
	int mf_order[3] = { 0,2,1 };

	int i = 0;

	int arr_3d[2][3][4] =
	{
		{
			{1,2,3,4},
			{5,6,7,8},
			{9,10,11,12}
		},
		{
			{13,14,15,16},
			{17,18,19,20},
			{21,22,23,24}
		}
	};

	int mf_depth[3] = { 2,3,4 };
	int * ptr = ThreeToOne(mf_depth, mf_order, arr_3d);

	printf("\n");

	for (i = 0; i < 24; i++)
	{
		printf("%d ", ptr[i]);
	}
	
	
}