#include <stdio.h>
int main(void)
{
	int sum = 0;
	int i = 4;
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = &arr[4];


	for (i = 4; i >= 0; i--)
	{
		sum += *(arr+i);
			
	}
		printf("ÃÑ ÇÕ=%d", sum);
}