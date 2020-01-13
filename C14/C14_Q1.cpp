#include <stdio.h>
void SquareByValue(int n1)
{
	int square_num1 = n1 * n1;
	printf("square_num1ÀÇ Á¦°ö=%d\n\n", square_num1);
}
void SquareByReference(int* ptr1)
{
	int num1 = *ptr1;
	*ptr1 = num1 * num1;
}
int main(void)
{
	int num1 = 10;
	SquareByValue(num1);
	SquareByReference(&num1);
	printf("num1ÀÇ Á¦°ö=%d\n\n",num1);
	return 0;
}