#include <stdio.h>
int main (void)
{
	int i=0;
	
	for(i=0; i<3; i++)
	{
		int num=0;
		num++;
		printf("%d��° for num=%d\n",i,num);
	}
	//for���� ���԰� Ż�� �ݺ� , �ٽ� ������ �� num�� �ٽ� �ʱ�ȭ 
	if(i==3)
	{
		int num=7;
		num++;
		printf("if�� num=%d",num);
	}
}
