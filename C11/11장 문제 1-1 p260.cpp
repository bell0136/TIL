#include <stdio.h>
int main (void)
{
	printf("5���� ������ �Է��Ͻÿ�\n");
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
	printf("�ּڰ�=%d",min);
	printf("�ִ�=%d ",max);
}
