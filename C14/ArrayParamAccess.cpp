#include<stdio.h>
void AddArrayElem(int* param, int len, int add)
{
	int i;
	for (i = 0; i < len; i++)
	{
		param[i] += add;
	}
}
void ShowArrayElem(int* param, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d ", param[i]);
	}
	printf("\n");
}
int main(void)
{
	int arr1[3] = { 1,2,3 };
	AddArrayElem(arr1, sizeof(arr1) / sizeof(int), 1);
	ShowArrayElem(arr1, sizeof(arr1) / sizeof(int));

	AddArrayElem(arr1, sizeof(arr1) / sizeof(int), 2);
	ShowArrayElem(arr1, sizeof(arr1) / sizeof(int));

	AddArrayElem(arr1, sizeof(arr1) / sizeof(int), 3);
	ShowArrayElem(arr1, sizeof(arr1) / sizeof(int));
	
	return 0;
}