#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main(void)
{
	char str1[20]="12334567";
	char str2[20];
	char str3[5];

	strcpy(str2, str1);
	puts(str2);

	strncpy(str3, str1, sizeof(str3));//strcpy�� null�� ������� ����
	puts(str3);// ������ puts�� null���� �������� ���ڿ��� �����Ƿ� ������ ���� ���, error

	strncpy(str3, str1, sizeof(str3)-1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);

	return 0;
}