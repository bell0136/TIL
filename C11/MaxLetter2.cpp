#include <stdio.h>
int main (void)
{
	int str[50];
	printf("단어를 입력하시오\n");
	scanf("%s",str);
	
	int i=0;
	int max;
	max=str[0];
	for(i=1; str[i] != 0; i++)
	{		
		if(str[i]>max)
		{
			max = str[i];
		}
		
	}	
	printf("최댓값=%c",max);
	

}
