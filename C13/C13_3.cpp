#include <stdio.h>
int main(void)
{
	int i = 0;
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = &arr[4];
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum += *(ptr - i);
	}
	printf("รัวี %d", sum);
}

