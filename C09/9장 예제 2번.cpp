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
 		printf("������ �� ū ��=%d",ab2);
	 }
	 else
	 {
	 	printf("������ �� ū ��=%d",ab1);
	 }
 }
 int main (void)
 {
 	int num1;
 	int num2;
 	int ab1,ab2;
	printf("���Է�\n");
 	scanf("%d %d",&num1,&num2);
 	ab1=absolute(num1);
 	ab2=absolute(num2);
 	absolute_compare(ab1,ab2);	
 }
