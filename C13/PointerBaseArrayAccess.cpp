#include <stdio.h>

int main(void)
{
	int arr[3] = { 11,22,33 };
	int* ptr = arr; //int * ptr = &arr[0];

	printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2));

	printf("%d\n", *ptr);
	ptr++;
	printf("%d\n", *ptr);
	ptr++;
	printf("%d\n", *ptr);
	ptr--;
	printf("%d\n", *ptr);
	ptr--;
	printf("%d", *ptr);
	printf("\n");
	return 0;

}