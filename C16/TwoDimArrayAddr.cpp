#include <stdio.h>
int main(void)
{
	int arr[3][2];
	int i = 0;
	int j = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%p\n", &arr[i][j]);
		}
	}
	//1�������� ���ʷ� �迭
	return 0;
}