#include <stdio.h>
int main (void)
{
	printf("5개의 정수를 입력하시오\n");
	int arr[5];

	int max;
	int min;
	int i;
	scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
	min=max=arr[0];
	 
	for(i=1;i<5;i++)	
	{		
		if(arr[i]<min)
		{
			min=arr[i];
		}
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("최솟값=%d",min);
	printf("최댓값=%d ",max);
}
