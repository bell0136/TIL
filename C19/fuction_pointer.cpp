#include <stdio.h>
double fct(int)
{
	return 8.8;
}
int main(void)
{
	double (*ptr)(int) = fct;
	printf("%d \n", sizeof(ptr));//int든 double이든 포인터변수는 언제나 4byte(32bit)체제
	printf("%p ", fct);
	return 0;
}