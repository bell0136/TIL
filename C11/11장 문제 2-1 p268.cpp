#include <stdio.h>
int main (void)
{
	int i=0;
	char str[50];
	printf("�ܾ �Է��Ͻÿ�\n");
	scanf("%s",str);
	
	/*for(; str[i]!=0; i++)
	{
		for�� 
	}*/
	/*while(str[i]!=0)
	{
		while�� 
		i++;
	 }*/
	do
	{
		i++;
	 } while(str[i]!=0);
	
	printf("%d",i);
	//�迭�� �׻� 0���� �����Ѵ� ��������~ 
	
 } 
