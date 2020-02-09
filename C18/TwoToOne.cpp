#include <stdio.h>
int* d_change(int(*array)[4], int* a_choice)
{
	int i,j,k = 0;
	static int readarray[12] = {0};

	if (a_choice[0] == 0)
	{
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 3; j++)
			{
				readarray[k] = array[j][i];
				k++;
			}
		}
	}

	if (a_choice[0] == 1)
	{
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 4; j++)
			{
				readarray[k] = array[i][j];
				k++;
			}
		}
	}
	return readarray;
}
int main(void)
{
	int i = 0;
	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int choice[2] = {0,1};
	
	int* ptr = d_change(arr, choice);

	for (i = 0; i < 12; i++)
	{
		printf("%d ", *(ptr+i));//d_change(arr, choice)[i]
	}

}