#include <stdio.h>
int a(void)
{
	int num = 1;
	int* ptr = &num;
	return*ptr;
}