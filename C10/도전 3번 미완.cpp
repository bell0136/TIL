#include <stdio.h>
//�ִ����� ��� 
int main (void)
{
	int num1,num2;
	int a;//num1�� ������ ���� 
	int b;//num2�� ������ ����  
	printf("�� ������ �Է��Ͻÿ�\n");
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
		printf("�ִ�����:b=%d",a);
	}	
}
