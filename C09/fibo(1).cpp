#include <stdio.h>
int main (void)
{
	int i=2;
	int num;
	printf("¼öÀÔ·Â");
	scanf("%d",&num);
	int arr[num]; 
	arr[0]=0;
	arr[1]=1;
	for(i=2; i<num; i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
		printf("%d ",arr[i]);
	}

}
