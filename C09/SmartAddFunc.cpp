#include <stdio.h>
void message (void)
{
	printf("�ΰ��� ������ �Է��Ͻø� ��������� ��µ˴ϴ�.\n");
	printf("�ΰ��� ������ �Է��Ͻÿ�\n");
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
	printf("������� ���:%d",result);
}

