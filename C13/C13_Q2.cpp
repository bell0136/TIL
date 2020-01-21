#include <stdio.h>
int main(void)
{
	int i = 0;
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;

	for (i = 0; i < 5; i++)
	{
		arr[i] = *(ptr + i) + 2;
		printf("%d번째요소+2 %d\n", i + 1, arr[i]);
	}
	//문제 조건 : ptr의 주소값은 변하지 않도록 한다.
	return 0;
}