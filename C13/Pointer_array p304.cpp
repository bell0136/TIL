#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	int i = 0;
	int* arr[3] = { &num1, &num2, &num3 };

	for (i = 0; i < 3; i++)
	{
		printf("%d\n", *arr[i]);
	}
}