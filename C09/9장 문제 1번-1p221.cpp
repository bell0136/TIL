 #include <stdio.h>
int compare (int a,int b,int c)
{
	if(a>b)
	{
		if(a>c)
		{
			if(b>c)
			{
				printf("�ִ�=%d�ּڰ�=%d",a,c);	
			}
			if(c<b)
			{
				printf("�ִ�=%d�ּڰ�=%d",a,b);
			}
		}
	}
	if(b>a)
	{
		if(b>c)
		{
			if(a>c)
			{
				printf("�ִ�=%d�ּڰ�=%d",b,c);	
			}
			if(a<c)
			{
				printf("�ִ�=%d�ּڰ�=%d",b,a);
			}
		}
	}
	if(c>a)
	{
		if(c>b)
		{
			if(b>a)
			{
				printf("�ִ�=%d�ּڰ�=%d",c,a);	
			}
			if(b<a)
			{
				printf("�ִ�=%d�ּڰ�=%d",c,b);
			}
		}
	}
}
int main (void)
{
	int num1,num2,num3;
	printf("��\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	compare(num1,num2,num3);
}
