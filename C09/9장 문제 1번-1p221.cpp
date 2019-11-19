 #include <stdio.h>
int compare (int a,int b,int c)
{
	if(a>b)
	{
		if(a>c)
		{
			if(b>c)
			{
				printf("ÃÖ´ñ°ª=%dÃÖ¼Ú°ª=%d",a,c);	
			}
			if(c<b)
			{
				printf("ÃÖ´ñ°ª=%dÃÖ¼Ú°ª=%d",a,b);
			}
		}
	}
	if(b>a)
	{
		if(b>c)
		{
			if(a>c)
			{
				printf("ÃÖ´ñ°ª=%dÃÖ¼Ú°ª=%d",b,c);	
			}
			if(a<c)
			{
				printf("ÃÖ´ñ°ª=%dÃÖ¼Ú°ª=%d",b,a);
			}
		}
	}
	if(c>a)
	{
		if(c>b)
		{
			if(b>a)
			{
				printf("ÃÖ´ñ°ª=%dÃÖ¼Ú°ª=%d",c,a);	
			}
			if(b<a)
			{
				printf("ÃÖ´ñ°ª=%dÃÖ¼Ú°ª=%d",c,b);
			}
		}
	}
}
int main (void)
{
	int num1,num2,num3;
	printf("°ª\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	compare(num1,num2,num3);
}
