#include <stdio.h>
#include <stdlib.h>
int main()
{
	int*** tptr = (int***)malloc(sizeof(int**)*2);
	int i = 0;
	int j = 0;

	for (i = 0; i < 2; i++)
	{
		tptr[i] = (int**)malloc(sizeof(int*) * 3);
		for (j = 0; j < 3; j++)
		{
			tptr[i][j] = (int*)malloc(sizeof(int) * 4);
		}
	}

	printf("%p\n",tptr);
	for (i = 0; i < 2; i++)
	{
		printf("1.%p ", tptr[i]); 
		for (j = 0; j < 3; j++)
		{
			printf("2.%p ", tptr[i][j]);
		}
	}

	for (i = 0; i < 2; i++)
	{
		free(tptr[i]);
		for (j = 0; j < 3; j++)
		{
			free(tptr[i][j]);
		}
	}

	return 0;
}