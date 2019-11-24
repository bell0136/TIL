#include <stdio.h>
int main(void)
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int i=0;
	int* ptr = &arr[0];
	int j = 0;
	
	for (i = 0; i < 3; i++)
	{
		*(ptr+i) = *(ptr + 5 - i);
		printf("%d ", *(ptr+i));
	}
	for (i = 1; i < 4; i++)
	{
		*(ptr + 3 +i) = *(ptr + 3) - (i);
		printf("%d ", *(ptr + 3+ i));
	}
	
}