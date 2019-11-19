#include <stdio.h>
int main(void)
{
	int sec;
	int min;
	int hour;
	int i;
	printf("¼öÀÔ·Â\n");
	scanf("%d", &sec);
	if (3600 <= sec)
	{
		hour = sec / 3600;
		sec = sec - (hour * 3600);
		printf("h:%d,", hour);		
	}
	else if (sec - 3600 < 0)
	{
		printf("h:0,");
	}

	if (60 <= sec && sec <= 3599)
	{
		min = sec / 60;
		sec = sec - (min * 60);
		printf(" m:d,", min);		
	}
	else if (sec - 60)
	{
		printf(" m:0,");
	}
	if (60 >= sec)
	{
		printf(" s:%d", sec);
		
	}
	else if (sec == 0)
	{
		printf(" s:0");
	}
	return 0;
}