#include <stdio.h>
typedef int INT;
typedef int* INT_ptr;

typedef unsigned int UINT; //unsign¾Æ´Ï°í unsigned
typedef unsigned int* UINT_ptr; 

typedef char UCHAR; 
typedef char* UCHAR_ptr;

int main()
{
	INT num1 = 10;
	INT_ptr pnum1= &num1;

	UINT num2 = 20;
	UINT_ptr pnum2 = &num2;

	UCHAR ch = 'z';
	UCHAR_ptr pchar = &ch;

	printf("%d %u %c", *pnum1, *pnum2, *pchar);
}