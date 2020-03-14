#include <stdio.h>
#include <stdlib.h>
int main()
{
	int*** tptr = (int***)malloc(sizeof(int**)*2);
	int i = 0;
	int j = 0;
	int k = 0;

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
		
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				tptr[i][j][k] = 1;
				printf("%d\t", tptr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			free(tptr[i][j]);
		}
	}
	for (i = 0; i < 2; i++)
	{
		free(tptr[i]);
	}

	free(tptr);

	return 0;
}