#include <stdio.h>
int absolute (int a)
{
	if(a<0)
	{
		return a*(-1);
	}
	if(a>=0)
	{
		return a;
	}
 } 
 int absolute_compare (int ab1, int ab2)
 {
 	if(ab1<=ab2)
	 {
 		printf("절댓값이 더 큰 수=%d",ab2);
	 }
	 else
	 {
	 	printf("절댓값이 더 큰 수=%d",ab1);
	 }
 }
 int main (void)
 {
 	int num1;
 	int num2;
 	int ab1,ab2;
	printf("수입력\n");
 	scanf("%d %d",&num1,&num2);
 	ab1=absolute(num1);
 	ab2=absolute(num2);
 	absolute_compare(ab1,ab2);	
 }
