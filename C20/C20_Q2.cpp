#include <stdio.h>
int main(void)
{
	int num = 0;
	int i = 0;
	int j = 1;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &num);

	int square[20][20] = {};

	for (i = 0; i < num; i++)
	{
		square[0][i] = j;
		printf("%d ", square[0][i]);
		j++;
	}
	printf("\n");

	for (i = 1; i < num; i++)
	{
		square[i][num] = j;
		printf("%9d ", square[i][num]);
		printf("\n");
		j++;
	}

}