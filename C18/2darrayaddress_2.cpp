#include <stdio.h>
int main(void)
{
	int arr2d[3][3] = {0};
	int array2d[4][2] = { 0 };
	printf("%d\n", arr2d);
	printf("%d\n", arr2d[0]);
	printf("%d\n", &arr2d[0]);
	printf("%d\n\n", &arr2d[0][0]);

	printf("%p\n", arr2d);
	printf("%p\n", arr2d+1);
	printf("%p\n", array2d);
	printf("%p\n", array2d+1);


}