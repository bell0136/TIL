#include <stdio.h>
int main(void)
{
	int arr[2][2] = {
		{1,2},{3,4}
	};
	int arr2[3][2] = {
		{1,2},{3,4},{5,6}
	};
	int arr3[4][2] = {
		{1,2}, {3,4}, {5,6}, {7,8}
	};

	int(*ptr)[2];
	ptr = arr;
	int i = 0;

	printf("arr1\n");
	for (i = 0; i < 2; i++)
	{
		printf("%d %d\n", ptr[i][0], ptr[i][1]);
	}
	printf("\n");
	ptr = arr2;

	printf("arr2\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d %d\n", ptr[i][0], ptr[i][1]);
	}
	printf("\n");
	ptr = arr3;

	printf("arr3\n");
	for (i = 0; i < 4; i++)
	{
		printf("%d %d\n", ptr[i][0], ptr[i][1]);
	}

}