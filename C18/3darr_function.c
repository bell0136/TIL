#include <stdio.h>
void f_arr(int(*arr)[3][4])
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				printf("%d\t", arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[0]));
	printf("%d\n", sizeof(arr[0][0]));
	printf("%d\n", sizeof(arr[0][0][0]));
	//2차원배열은 가로의길이는 구할 수 있으나 인자로 세로길이를 전달해야함
	//3차원배열은 세로길이를 인자로 전달해야함
}
int main()
{
	int arr_3d[][3][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
	int arr_2d[][3] = { 1,2,3,4,5,6 };
	int arr_1d[] = { 1,2 };
	printf("%d\n", sizeof(arr_3d));
	printf("%d\n", sizeof(arr_3d[0]));
	printf("%d\n", sizeof(arr_3d[0][0]));
	printf("%d\n", sizeof(arr_3d[0][0][0]));

	int high_length = sizeof(arr_3d) / (sizeof(arr_3d[0]));
	int sero_length = sizeof(arr_3d[0])/sizeof(arr_3d[0][0]);
	int garo_length = sizeof(arr_3d[0][0][0]);
	
	printf("%d\n", high_length);
	printf("%d\n", sero_length);
	printf("%d\n", garo_length);
	//f_arr(arr_1d);
	//f_arr(arr_2d);
	f_arr(arr_3d);
}