#include <stdio.h>
int main(void)
{
	int i = 0;
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;

	for (i = 0; i < 5; i++)
	{
		arr[i] = *(ptr + i) + 2;
		printf("%d��°���+2 %d\n", i + 1, arr[i]);
	}
	//���� ���� : ptr�� �ּҰ��� ������ �ʵ��� �Ѵ�.
	return 0;
}