#include <stdio.h>
#include <string.h>
void RemoveBSN(char * str)
{
	int length = strlen(str);
	str[length-1] = 0;
	//������ �ڸ� \n ���� ��Ű�� �;
	//strlenȣ�� �� �� null���ڴ� ���̿� ����x
}
int main()
{
	char str[100];
	printf("���ڿ��Է�\n");
	fgets(str,sizeof(str),stdin);
	printf("���� %d\n ���� %s\n", strlen(str), str);

	RemoveBSN(str);
	printf("���� %d\n ���� %s\n", strlen(str), str);
	return 0;

}