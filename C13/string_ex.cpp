#include <stdio.h>
int main(void)
{
	const char* str[3] = { "salt","pepper","sauce" };
	printf("%p\n", &str[0]);
	printf("%p\n", &str[1]);
	printf("%p\n\n", &str[2]);

	double num1 = 1.1;
	double num2 = 2.2;
	double num3 = 3.3;

	double* arr[3] = { &num1,&num2,&num3 };
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]);
	printf("%p\n", &arr[2]);
}