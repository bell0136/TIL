#include <stdio.h>
int main(void)
{
	int num = 10;
	int* ptr1 = &num;
	double num2 = 2.2;
	double* ptr2 =&num2;
	
	printf("%p, %p \n", ptr1 + 1, ptr1 + 2);
	printf("%p, %p \n", ptr2 + 1, ptr2 + 2);

	printf("%p, %p\n", ptr1, ptr2);
	
	ptr1++;
	ptr2++;
	printf("%p, %p\n", ptr1, ptr2);
}