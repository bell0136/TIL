#include <stdio.h>
int main(void)
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int i = 0;
	int* ptr = arr;
	int j = 0;

	for (i = 0; i < 3; i++)
	{
		*(ptr + i) = *(ptr + 5 - i);
		printf("%d ", *(ptr + i));
	}
	for (i = 1; i < 4; i++)
	{
		*(ptr + 2 + i) = *(ptr + 2) - (i);
		printf("%d ", *(ptr + 2 + i));
	}
	return 0;
}