#include <stdio.h>
#include <stdlib.h>
char** printname()
{
	char *name = (char*)malloc(sizeof(char) * 20);
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

	free(name1);//ù��° �Լ�ȣ���� �� �������� name���� ���� name1���� ��ȯ
	free(name2);//�ι��� �Լ�ȣ�� �� ���������� name���� ���� name2�� ��ȯ
	
	return 0;
}