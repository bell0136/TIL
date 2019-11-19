#include <stdio.h>
//10개의 소수출력 
int main (void)
{
	int a;
	int num=3;
	int i=10;
	printf("%d ",2);
	for(i=0; i<10; i++)
	{
		a=num-1;
		for(; a>1;a--)
		{			
			if(num%a==0)
			{
				break;
			}
			if(num%a!=0)
			{			
				continue;
			}
									
		}printf("%d ",num);
		num++;	
				
	}
}
