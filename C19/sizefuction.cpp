#include <stdio.h>
int *fuction(int* a)
{
	int* ptr = a;
	return ptr;
}
int main(void)
{
	int num1 = 10;
	int* ptr = &num1;
	int* ttt = fuction(ptr);

	printf("%d\n", sizeof(ptr));
	printf("%d ",sizeof(fuction(ptr)));
}