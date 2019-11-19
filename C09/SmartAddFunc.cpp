#include <stdio.h>
void message (void)
{
	printf("두개의 정수를 입력하시면 덧셈결과가 출력됩니다.\n");
	printf("두개의 정수를 입력하시오\n");
 } 
int insert (void)
{
	int a,b;
	scanf("%d",&a);
	return a;
	scanf("%d",&b);
	return b;
}
int add (int a, int b)
{
	return a+b;
}
int main (void)
{
	int a,b;
	int result;
	message();
	a=insert();
	b=insert();
	result=add(a,b);
	printf("덧셈결과 출력:%d",result);
}

