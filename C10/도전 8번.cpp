#include <stdio.h>
int square (int num)
{

	if(num<=0)
	{
		return 1;
	}
	return 2* square(num-1);
}
int insert (void)
{
	int num;
	printf("���Է�\n");
	scanf("%d",&num);
	return num;
}
int main (void)
{
	int num;
	int result;
	num=insert();
	result = square(num);
	printf("2�� %d���� = %d",num,result);
}
