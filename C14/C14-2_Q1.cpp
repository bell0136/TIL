#include <stdio.h>
void ShowAllData(const int* arr, int len) //int* arr 앞의 const는 arr배열요소의 값이 바뀌지 않도록 하기위함이다.
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