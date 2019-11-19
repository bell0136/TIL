#include<stdio.h>
int main (void)
{
	int i=1;
	int num=2;
	int isprime=1;
	
	for(num=2;num<30;num++)
		{
			i=1;
			for(; i<num; i++)
			{
				isprime=1;
					if(num%i!=0)
					{
						//isprime은 1이다. 
					}
					if(num%i==0)
					{
						isprime=0; 
						break;
					//소수가 아니다. 
					}
			}
			if(isprime==0)
			{
				
			}
			if(isprime==1)
			{
				printf("%d\n",num);
			}
		}
}
