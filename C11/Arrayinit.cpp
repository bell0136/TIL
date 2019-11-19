#include <stdio.h>
int main (void)
{
	int len[5]={1,2};
	int arr1[3]={2,2,2};
	int arr2[]={1,2,3,4,5};
	int i;
	
	printf("배열의 크기\n");
	printf("%d\n",sizeof(len));
	printf("%d\n",sizeof(arr1));
	printf("%d\n",sizeof(arr2));
	
	for(i=0;i<5;i++)
	{
		printf("%d",len[i]);
	 } 
	 printf("\n");
	 for(i=0;i<3;i++)
	{
		printf("%d",arr1[i]);
	 } 
	 printf("\n");
	 for(i=0;i<5;i++)
	{
		printf("%d",arr2[i]);
	 } 

}
