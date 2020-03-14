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
	//가로가 5,세로가 4인 2차원 배열
	for (i = 0; i < 5; i++)
	{
		free(dptr[i]);
	}
	free(dptr);
	return 0;
}