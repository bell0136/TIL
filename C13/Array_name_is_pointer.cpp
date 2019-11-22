#include <stdio.h>
int main(void)
{
	int arr[3] = { 1, 2, 3 };
	arr[0] += 5;
	arr[1] += 7;
	arr[2] += 9;
	printf("첫번째요소의 주소 %d\n", arr[0]);
	printf("두번째요소의 주소 %d\n", arr[1]);
	printf("세번째요소의 주소 %d\n", arr[2]);

	//배열의 이름은 포인터

	int* ptr = &arr[0];
	//int *ptr = arr1; 배열의 이름도 포인터이므로 &안해도됨
	
	printf("%d %d\n", ptr[0], arr[0]);
	printf("%d %d\n", ptr[1], arr[1]);
	printf("%d %d\n", ptr[2], arr[2]);
	printf("%d %d\n", *ptr, *arr);
	return 0;
}