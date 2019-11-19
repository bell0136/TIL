#include <stdio.h>
void stt(void)
{
	static int num=0;
	int i=0;
	num++;i++;
	printf("static=%d\n",num);
	printf("local=%d\n",i);
	
}
int main (void)
{
	int i;
	for(i=0; i<3; i++)
	{
		stt();
	}
}
