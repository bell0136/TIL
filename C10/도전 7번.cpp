#include <stdio.h>
int main (void)
{
	int i;
	int num;
	printf("�����Է��Ͻÿ�\n");
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
