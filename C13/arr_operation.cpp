#include <stdio.h>
int main(void)
{
	int arr[3] = { 1,2,3 };
	int* ptr = arr;

	printf("%d\n", *ptr);
	printf("%d\n", *(++ptr));

	return 0;
}