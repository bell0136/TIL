#include <stdio.h>
int main (void)
{
	int i=0;
	
	for(i=0; i<3; i++)
	{
		int num=0;
		num++;
		printf("%d번째 for num=%d\n",i,num);
	}
	//for문은 진입과 탈출 반복 , 다시 진입할 때 num은 다시 초기화 
	if(i==3)
	{
		int num=7;
		num++;
		printf("if의 num=%d",num);
	}
}
