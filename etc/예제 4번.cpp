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
	printf("10진수 정수를 입력하시오.\n");
	scanf("%d",&num);
	
	printf("1의 보수:");
	while(num>0)
	{
		
		int a;//num을 2로 나눴을 때 나머지 
		int b=1;
		
		a=num%2;
		total+=a*b;
		num=num/2;	
		qhtn1=c(a);
		b*=10;	
	}
		printf("%d",total);
		printf("2진수%d\n",qhtn1);
		 
	

}
