#include <stdio.h>
int c (int a)
{
	if(a==0)
	{
		return 1;
	}
	if(a==1)
	{
		return 0;
	}
}
int main (void)
{	
	int num;
	int a; 
	int total=0;
	int qhtn1;
	printf("10���� ������ �Է��Ͻÿ�.\n");
	scanf("%d",&num);
	
	printf("1�� ����:");
	while(num>0)
	{
		
		int a;//num�� 2�� ������ �� ������ 
		int b=1;
		
		a=num%2;
		total+=a*b;
		num=num/2;	
		qhtn1=c(a);
		b*=10;	
	}
		printf("%d",total);
		printf("2����%d\n",qhtn1);
		 
	

}
