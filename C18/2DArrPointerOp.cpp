#include <stdio.h>
int main(void)
{
	int arr1[3][2];
	int arr2[2][3];

	printf("arr1 = %p\n", arr1);
	printf("arr1 = %p\n", arr1 + 1); //1��� int�� 2���̹Ƿ� 8����Ʈ�� ������
	printf("arr1 = %p\n\n", arr1 + 2);

	printf("arr2 = %p\n", arr2);
	printf("arr2 = %p\n", arr2 + 1); //1��� int�� 3���̹Ƿ� 12����Ʈ�� ������

	return 0;
}