#include <stdio.h>
int main(void)
{
	int arr1[3] = { 1, 2, 3 };
	double arr2[3] = { 1.1, 2.2, 3.3 };
	printf("arr1 ù��° ����� �ּҰ� = %p\n", &arr1);
	printf("arr2 ù��° ����� �ּҰ� = %p\n", &arr2);
	printf("arr1 ù��° ����� ������ �� = %d\n", *arr1);
	printf("arr2 ù��° ����� ������ �� = %g\n", *arr2);
	*arr1 += 100;
	*arr2 += 100;
	printf("arr1 ù��° ����� ������ �� + %d = %d\n", 100, *arr1);
	printf("arr2 ù��° ����� ������ �� + %d = %g\n", 100, *arr2);
	return 0;
}