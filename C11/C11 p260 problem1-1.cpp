#include <stdio.h>
int main (void)
{
	int i;
	int j;
	int sum=0;
	int max;
	int min; 
	int arr[50];
	printf("5개의 정수를 입력하시오\n");
	scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
	max=arr[0];
	min=arr[0];
	i=j;
	for(j=0; j<4;j++)
	{
		sum+=arr[j];	
	}
	printf("총합=%d",sum);
	
	for(i=0; i<4; i++)
	{
		if(max<=arr[i+1])
		{
			max=arr[i+1];
		}
		if(min>=arr[i+1])
		{
			min=arr[i+1];
		}
	}
	printf("최댓값=%d, 최솟값=%d",max,min);	
}
