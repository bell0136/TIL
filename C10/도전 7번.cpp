#include <stdio.h>
int main (void)
{
	int i;
	int num;
	printf("수를입력하시오\n");
	scanf("%d",&num);
	for(i=0;;i++)
	{
		num=num/2;		
		if(num==0)
		{
			break;
		}
	}
	printf("%d",i);
}
