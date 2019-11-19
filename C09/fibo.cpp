#include <stdio.h>
int fibo (int num)
{	
	int a=1;		 
	if(a==1)
	{
		return 0;
		a+=1;
	 } 	 
	 if(a==2)
	 {
	 	return 1;	 	
	 	a+=1;
	 }
	 return fibo(a-1)+fibo(a-2);
	 
	 if(a==num)
	 {
	 	printf("1");
	 }	 
}
int main (void)
{
	int n;
	int result;
	printf("수를입력하시오\n");
	scanf("%d",&n); 
	fibo(n);
	printf("%d",result);
}
