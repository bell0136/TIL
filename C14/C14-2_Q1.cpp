#include <stdio.h>
void ShowAllData(const int* arr, int len) //int* arr ���� const�� arr�迭����� ���� �ٲ��� �ʵ��� �ϱ������̴�.
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main(void)
{
	int arr[3] = { 1,2,3 };
	ShowAllData(arr, sizeof(arr)/sizeof(int));
}