#include <stdio.h>
#include <string.h>
int space(char* str)
{
	int i = 0;
	while (str[i] != 32)
	{
		i++;
	}
	return i;
}
int main(void)
{
	char str1[20] = {0};
	char str2[20] = {0};
	char reverse_str1[20];
	char reverse_str2[20];

	int name1 = 0;
	int name2 = 0;
	int size = 0;
	int i = 0;
	int age1 = 0;
	int age2 = 0;

	puts("�̸� ���� �Է��Ͻÿ�");
	fgets(str1, sizeof(str1), stdin);

	puts("�̸� ���� �Է��Ͻÿ�");
	fgets(str2, sizeof(str2), stdin);

	for (i = 0; i <= strlen(str1) - 1; i++)
	{
		size = strlen(str1);
		reverse_str1[size - i] = str1[i];
	}
	for (i = 0; i <= strlen(str2) - 1; i++)
	{
		size = strlen(str2);
		reverse_str2[size - i] = str2[i];
	}

	name1 = space(str1);
	name2 = space(str2);

	if (name1 != name2)
	{
		puts("�̸��� �ٸ��ϴ�.");
	}
	if (name1 == name2)
	{
		if (!strncmp(str1, str2, name1))
		{
			puts("�̸��� �����ϴ�.");
		}
		else
		{
			puts("�̸��� �ٸ��ϴ�");
		}
	}

	age1 = space(reverse_str1);
	age2 = space(reverse_str2);

	if (age1 != age2)
	{
		puts("���̰� �ٸ��ϴ�.");
	}
	if (age1 == age2)
	{
		if (!strncmp(reverse_str1, reverse_str2, age1))
		{
			puts("���̰� �����ϴ�.");
		}
		else
		{
			puts("���̰� �ٸ��ϴ�");
		}
	}
	return 0;
}