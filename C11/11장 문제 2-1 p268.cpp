#include <stdio.h>
int main (void)
{
	int i=0;
	char str[50];
	printf("단어를 입력하시오\n");
	scanf("%s",str);
	
	/*for(; str[i]!=0; i++)
	{
		for문 
	}*/
	/*while(str[i]!=0)
	{
		while문 
		i++;
	 }*/
	do
	{
		i++;
	 } while(str[i]!=0);
	
	printf("%d",i);
	//배열은 항상 0부터 시작한다 잊지말자~ 
	
 } 
