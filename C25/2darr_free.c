#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num1 = 5;
	int num2 = 4;
	int** dptr;
	dptr = (int**)malloc(sizeof(int*) * 5);
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		dptr[i] = (int*)malloc(sizeof(int)*4);
	}
	//���ΰ� 5,���ΰ� 4�� 2���� �迭
	for (i = 0; i < 5; i++)
	{
		free(dptr[i]);
	}
	free(dptr);
	return 0;
}