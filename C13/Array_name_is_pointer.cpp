#include <stdio.h>
int main(void)
{
	int arr[3] = { 1, 2, 3 };
	arr[0] += 5;
	arr[1] += 7;
	arr[2] += 9;
	printf("ù��°����� �ּ� %d\n", arr[0]);
	printf("�ι�°����� �ּ� %d\n", arr[1]);
	printf("����°����� �ּ� %d\n", arr[2]);

	//�迭�� �̸��� ������

	int* ptr = &arr[0];
	//int *ptr = arr1; �迭�� �̸��� �������̹Ƿ� &���ص���
	
	printf("%d %d\n", ptr[0], arr[0]);
	printf("%d %d\n", ptr[1], arr[1]);
	printf("%d %d\n", ptr[2], arr[2]);
	printf("%d %d\n", *ptr, *arr);
	return 0;
}