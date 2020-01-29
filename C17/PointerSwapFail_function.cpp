#include <stdio.h>
void Swappointer(int* n1, int* n2)
{
	int* temp;
	temp = n1;
	n1 = n2;
	n2 = temp;

	printf("%d %d\n", *n1, *n2);
}
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	 //temp를 pointer변수로 선언을 안하면 compile 안 됨 error_*int형은 int형으로 대입할 수 없다.
	printf("%d %d\n", *ptr1, *ptr2);

	Swappointer(ptr1, ptr2);
	
}