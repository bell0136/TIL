#include <stdio.h>
int main(void)
{
	int num = 10;
	int* ptr = &num;
	double num1 = 3.12;
	double* ptr1 = &num1;
	printf("%d\n", sizeof(ptr));
	printf("%d\n", sizeof(ptr1));
	//32bit�� system������ int���̳� double���̳� �������� ����Ʈũ��� 4�� ����. 
	//64bit�� system������ int���̳� double���̳� �������� ����Ʈũ��� 8�� ����. 
}