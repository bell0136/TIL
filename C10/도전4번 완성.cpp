#include <stdio.h>
int main (void)
{
	int shrimp=1;
	int cream=1;
	int coke=1;
	int money=3500;
	
	for(; shrimp*700<money; shrimp++)
	{
		cream=1;
		for(; cream*500<money; cream++)
		{
			coke=1;
			for(; coke*400<money; coke++)
			{				
				if((shrimp*700)+(cream*500)+(coke*400)==money)
				{
					printf("shrimp=%d cream=%d coke=%d\n",shrimp,cream,coke);
				}
			}
		
		}
	}
	printf("어떻게 구입하시겠습니까?");
	//for문 중첩시킬 때 꼭 초기화하자... 
 } 
