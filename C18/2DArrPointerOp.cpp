#include <stdio.h>
int main(void)
{
	int arr1[3][2];
	int arr2[2][3];

	printf("arr1 = %p\n", arr1);
	printf("arr1 = %p\n", arr1 + 1); //1행당 int가 2개이므로 8바이트씩 더해짐
	printf("arr1 = %p\n\n", arr1 + 2);

	printf("arr2 = %p\n", arr2);
	printf("arr2 = %p\n", arr2 + 1); //1행당 int가 3개이므로 12바이트씩 더해짐

	return 0;
}