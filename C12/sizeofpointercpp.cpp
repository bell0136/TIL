#include <stdio.h>
int main(void)
{
	int num = 10;
	int* ptr = &num;
	double num1 = 3.12;
	double* ptr1 = &num1;
	printf("%d\n", sizeof(ptr));
	printf("%d\n", sizeof(ptr1));
	//32bit의 system에서는 int형이나 double형이나 포인터의 바이트크기는 4로 같다. 
	//64bit의 system에서는 int형이나 double형이나 포인터의 바이트크기는 8로 같다. 
}