#include <stdio.h>
char* printname()
{
	static char name[20]; //�Լ� ���������� �Ҹ�

	gets(name);
	return name;
}
int main()
{
	printf("%s", printname());
	return 0;
}