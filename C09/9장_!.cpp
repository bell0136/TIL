#include <stdio.h>
void command (void)
{
	printf("���� �Է��ϼ���\n");
}
void  print (int num)
{
	printf("%d\n",num);
	//��ȯ���� �����Ƿ� return�� ���� �ʴ´� 
}
int  insert (void)
{
	int num;
	//�Է��� ���� �����Ƿ� scanf�� �޴´�.

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
