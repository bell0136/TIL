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
	//후위증가이므로 바로 4(sizeof(int)증가 안함
	printf("%p\n", ++ptr1);
	//후위증가 후 4증가, 전위증가 한번더 증가 총 8증가

	ptr2++;
	printf("%p\n", ptr2);
	++ptr2;
	printf("%p\n\n", ptr2);

	printf("%p\n", ptr1);
	printf("%p\n", ptr2);
}
	