#include <stdio.h>
int add (void)
{
	int num1;
	int num2;
	printf("���� �Է��Ͻÿ�\n");
	scanf("%d %d",&num1,&num2);
	return num1+num2;
}

int main (void)
{
	int result;
	
	printf("%d",add());
	
}
