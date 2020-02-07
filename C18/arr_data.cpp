#include <stdio.h>
int main(void)
{
	int arr[2][5] = 
	{ 
		{2,3,4,5,6}, 
		{1,2,3,4,5} 
	};

	printf("%p\n", &arr[0][0]);
	printf("%p\n", &arr[0][1]);
	printf("%p\n", &arr[0][2]);
	printf("%p\n", &arr[0][3]);
	printf("%p\n", &arr[0][4]);

	printf("%p\n", &arr[1][0]);
	printf("%p\n", &arr[1][1]);


}