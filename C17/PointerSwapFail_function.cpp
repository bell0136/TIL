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
	 //temp�� pointer������ ������ ���ϸ� compile �� �� error_*int���� int������ ������ �� ����.
	printf("%d %d\n", *ptr1, *ptr2);

	Swappointer(ptr1, ptr2);
	
}