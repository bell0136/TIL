#include <stdio.h>
void rotation(int(*arr)[4])
{
	int temp;
	int i = 0;
	int j = 0;

	temp = arr[3][0];
	arr[3][0] = arr[3][3];
	arr[3][3] = arr[0][3];
	arr[0][3] = arr[0][0];
	arr[0][0] = temp;

	temp = arr[2][0];
	arr[2][0] = arr[3][2];
	arr[3][2] = arr[1][3];
	arr[1][3] = arr[0][1];
	arr[0][1] = temp;

	temp = arr[1][0];
	arr[1][0] = arr[3][1];
	arr[3][1] = arr[2][3];
	arr[2][3] = arr[0][2];
	arr[0][2] = temp;

	temp = arr[2][1];
	arr[2][1] = arr[2][2];
	arr[2][2] = arr[1][2];
	arr[1][2] = arr[1][1];
	arr[1][1] = temp;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main(void)
{
	int square[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	int i = 0;
	int j = 0;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%2d ", square[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	rotation(square);
	printf("\n");
	rotation(square);
	printf("\n");
	rotation(square);

}