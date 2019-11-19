#include <stdio.h>
int main (void)
{
	int sec;
	int min;
	int hour;
	printf("ผ๖ภิทย\n");
	scanf("%d",&sec);
	if(3600<=sec)
	{
		hour=sec/3600;
		sec=sec-(hour*3600);
		printf("hour=%d\n",hour);
	}
	if(60<=sec&&sec<=3599)
	{
		min=sec/60;
		sec=sec-(min*60);
		printf("min=%d\n",min);
	}
	if(60>=sec)
	{
		printf("sec=%d",sec);
	}
}
