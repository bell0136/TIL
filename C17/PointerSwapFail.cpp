#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* temp; //temp�� pointer������ ������ ���ϸ� compile �� �� error_*int���� int������ ������ �� ����.
	printf("%d %d\n", *ptr1, *ptr2);

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("%d %d\n", *ptr1, *ptr2);
}