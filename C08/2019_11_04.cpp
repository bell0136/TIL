#include<stdio.h>
int main (void)
{
	int A=0;
	int Z=9;
	int result;
	
	for(; A<10; A++)
	{
		
		for(; Z>=0; Z--)
		{
			result=(A*10+Z)+(Z*10+A);
			
			if(result==99)
			{
				break;	
			}
		}
		printf("%d%d+%d%d=%d\n",A,Z,Z,A,result);
	}
}
