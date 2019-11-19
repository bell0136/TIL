#include <stdio.h>
int num=1;
int add (int);
int main (void)
{
	int num=5;
	add(3);
	printf("%d\n",add(3));
	printf("num+9=%d",num+9);
}
int add (int i)
{
	int num=9;
	num+=i;
	return num;
}
