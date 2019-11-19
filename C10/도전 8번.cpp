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
	printf("수입력\n");
	scanf("%d",&num);
	return num;
}
int main (void)
{
	int num;
	int result;
	num=insert();
	result = square(num);
	printf("2의 %d승은 = %d",num,result);
}
