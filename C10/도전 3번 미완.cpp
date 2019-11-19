#include <stdio.h>
//최대공약수 출력 
int main (void)
{
	int num1,num2;
	int a;//num1에 나누고 나서 
	int b;//num2에 나누고 나서  
	printf("두 정수를 입력하시오\n");
	scanf("%d %d",&num1,&num2);
	
	for(a=num1-1; a>=0; a--)
	{
		if(num1%a!=0)
		{
			continue;				
		}	
		printf("a=%d ",a);		
	} 
	
	
	for(b=num2-1; b>=0; b--)
	{
		if(num2%b!=0)
		{
			continue;				
		}	
		printf("b=%d ",b);		
	} 
	

	
	if(a==b)
	{
		printf("최대공약수:b=%d",a);
	}	
}
