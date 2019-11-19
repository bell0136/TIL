#include <stdio.h>
int main (void)
{
	int arr[6]={10,24,35,46,57,10};
	int i=0;
	int sum=0;
	
	for(i=0; i<6; i++)
	{
		sum+=arr[i];
	}
	printf("รัวี=%d",sum);
}
