#include <stdio.h>
int plus2(int a)
{
	
	if(a==0)
	{
		return 0;
	}
	return 2+plus2(a-1);
		
 } 
 
int main (void)
{
	int num;
	int result;
		
	printf("���� �Է��Ͻÿ� ");
	scanf("%d",&num);
	result=plus2(num);
	printf("%d",result);
	
}
