#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;

	printf("%p\n", ptr1);
	printf("%p\n\n", ptr2);
	printf("%p\n", ptr1 + 1);
	printf("%p\n", ptr1++);
	//���������̹Ƿ� �ٷ� 4(sizeof(int)���� ����
	printf("%p\n", ++ptr1);
	//�������� �� 4����, �������� �ѹ��� ���� �� 8����

	ptr2++;
	printf("%p\n", ptr2);
	++ptr2;
	printf("%p\n\n", ptr2);

	printf("%p\n", ptr1);
	printf("%p\n", ptr2);
}
	