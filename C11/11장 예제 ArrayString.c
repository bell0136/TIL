#include <stdio.h>
int main (void)
{
	int i=0;
	char str[]="good morning!"; 
	printf("�迭 str�� ũ��:%d\n",sizeof(str));
	printf("�� ���� ������ ���:%c\n",str[13]);
	printf("�� ���� ������ ���:%d\n",str[13]);
	str[12]='?';
	printf("���ڿ����:"); 
	for(;i<14;i++)
	{
		printf("%c",str[i]);	
	}
	
}
