#include <stdio.h>
char name[20];
char* printname()
{
	gets(name);
	return name;
}
int main()
{
	printf("�̸�1�Է�\n");
	char* name1 = printname();
	printf("%s", name1);
	printf("\n");
	printf("�̸�2�Է�\n");
	char* name2 = printname();
	printf("%s", name2);
	printf("\n");
	printf("%s\n", name1);
	printf("%s\n", name2);

	//���������̱⶧���� name2�� ���� name1�����
	return 0;
}