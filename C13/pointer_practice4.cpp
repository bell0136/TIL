#include <Stdio.h>
int main(void)
{
	int arr[5] = { 1 ,2 , 3, 4, 5 };
	int* ptr = &arr[1];
	printf("%p,%d\n", ptr, *ptr);
	ptr--;
	printf("%p,%d\n", ptr, *ptr);
	arr[0] += 5;
	arr[1] += 6;
	printf("%d,%d", arr[0], arr[1]);
}