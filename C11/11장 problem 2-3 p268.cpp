#include <stdio.h>
//�ƽ�Ű�ڵ尡 ���� ū ���ڸ� ����϶� 
int main (void)
{
	char str[50];
	
	int i;
	int max;
	int min;
	printf("�ܾ �Է��ϼ���\n");
	scanf("%s",str);
	max=str[0];
	min=str[0];
	for(i=0; str[i]!=0; i++)
	{
		if(max<str[i+1])
		{
			max=str[i+1];		
		} 
	}

	printf("�ִ�:%c",max);

	
}
