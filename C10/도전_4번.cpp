#include<stdio.h>
int main (void)
{
	int money=3500;
	int shrimp=0;
	int cream=0;
	int coke=0;
	
	for(; (coke*400)<money; 400*(coke++))
	{
		if(coke==0)
		{
			continue;
		}
		cream=1;
		for(;(cream*500)<money-(coke*400); 500*(cream++))
		{
			if(cream==0)
			{
				continue;
			}
			
			shrimp=1;
			for(; (shrimp*700)<money-(coke*400+500*cream); 700*(shrimp++))
			{
				if(shrimp==0)
				{
					continue;
				}
				if(money!=0)
				{	
					continue;						
				}
				printf("货快兵=%d\n农覆户=%d\n妮扼=%d\n",shrimp,cream,coke);
			}	
			printf("货快兵=%d\n农覆户=%d\n妮扼=%d\n",shrimp,cream,coke);		
		}	
		
	}
	return 0;
} 
