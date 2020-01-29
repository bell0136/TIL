#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* temp; //temp를 pointer변수로 선언을 안하면 compile 안 됨 error_*int형은 int형으로 대입할 수 없다.
	printf("%d %d\n", *ptr1, *ptr2);

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("%d %d\n", *ptr1, *ptr2);
}