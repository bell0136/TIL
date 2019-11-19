#include<stdio.h>
int main (void)
{
	int num = 7;
	int a;
	int isprime = 1;

	for(a=2; a<num; a++)
	{
		if(num%a != 0)
		{
			//아무것도 아님 즉, isprime=1반환 
		}
		else
		{
			isprime = 0;
			break;	
		} 
	} 
	if(isprime == 1)
	{
		printf("%d는 소수가 맞습니다.\n", num);
	}
	else
	{
		printf("%d는 소수가 아닙니다.\n", num);
	}
	
}
