#include <stdio.h>
int One (void)
{
	int num=10;
	printf("num=%d",num);
	
}
int Two (void)
{
	int num1=20;
	int num2=30;
	num1++;
	num2--;
	printf("num1,num2=%d ,%d",num1,num2);
}
int main (void)
{
	int num=17;	
	One();
	Two();
	printf("main num=%d",num);
}
