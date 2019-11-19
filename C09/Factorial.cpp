#include <stdio.h>
int fac (int a)
{
	if(a<=0)
	{
		return 1;
	}
	return a*fac(a-1);
	
}
int main (void)
{
	int num;
	printf("수를입력하시오\n");
	scanf("%d",&num);
	fac(num);
	printf("(%d)!=%d\n",num,fac(num));
}
