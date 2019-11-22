#include <stdio.h>
int main(void)
{
	int arr1[3] = { 1, 2, 3 };
	double arr2[3] = { 1.1, 2.2, 3.3 };
	printf("arr1 첫번째 요소의 주소값 = %p\n", &arr1);
	printf("arr2 첫번째 요소의 주소값 = %p\n", &arr2);
	printf("arr1 첫번째 요소의 데이터 값 = %d\n", *arr1);
	printf("arr2 첫번째 요소의 데이터 값 = %g\n", *arr2);
	*arr1 += 100;
	*arr2 += 100;
	printf("arr1 첫번째 요소의 데이터 값 + %d = %d\n", 100, *arr1);
	printf("arr2 첫번째 요소의 데이터 값 + %d = %g\n", 100, *arr2);
	return 0;
}