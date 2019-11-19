#include <stdio.h>
void command (void)
{
	printf("수를 입력하세요\n");
}
void  print (int num)
{
	printf("%d\n",num);
	//반환하지 않으므로 return를 쓰지 않는다 
}
int  insert (void)
{
	int num;
	//입력을 받지 않으므로 scanf로 받는다.

	scanf("%d",&num);
	return num; 
}
int add (int a,int b)
{
	return a+b;
}

int main (void)
{
	int result;
	command();
	int a=insert();
	int b=insert();
	result = add(a,b);
	printf("%d",result);
}
