#include <stdio.h>

int main(void)
{
	int i = 0;
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = &arr[0];
	for (i = 0; i < 5; i++)
	{
		arr[i] = *(ptr)+=2;
		ptr++;
		printf("%d¹øÂ° %d\n", i + 1, arr[i]);
	}
	return 0;
}