#include <stdio.h>
int* ThreeToOne(int* depth,int* 3darr)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int 1darr[12] = { 0 };
	for (i = 0; i <depth[2];i++)
	{
		for (j = 0; j<depth[1];j++)
		{
			for (k=0; k<depth[0]; k++)
			{
				printf("%d ", 3darr[k][j][i]);
			}
		}
	}

	return 1darr;
}
int main(void)
{
	int arr[3] = { 2,1,0 };
	int i = 0;
	int 3darr[2][2][3] = 
	{
		{
			{1,2,3},
			{4,5,6}
		},
		{
			{7,8,9},
			{10,11,12}
		}
	};//높이 = 1,세로 = 2, 가로 = 3

	ThreeToOne(arr, 3darr);

	/*int* ptr = 1darr;

	for (i = 0; i < 12; i++)//배열의 길이
	{
		printf("%d ", *(ptr + i));
	}*/
}