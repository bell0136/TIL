#include<stdio.h>
int main (void)
{
	int num = 7;
	int a;
	int isprime = 1;

	for(a=2; a<num; a++)
	{
		if(num%a != 0)
		{
			//�ƹ��͵� �ƴ� ��, isprime=1��ȯ 
		}
		else
		{
			isprime = 0;
			break;	
		} 
	} 
	if(isprime == 1)
	{
		printf("%d�� �Ҽ��� �½��ϴ�.\n", num);
	}
	else
	{
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", num);
	}
	
}
