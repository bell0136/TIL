#include <stdio.h>
int main (void)
{
	int num=1;
	if(num==1)
	{
	//	int num=7;
		num+=10;
		printf("if 지역변수=%d\n",num);
	}
	printf("main 지역변수=%d",num);

 } 
