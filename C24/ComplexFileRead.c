#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	char name[20];
	char sex = 0;
	int age = 0;
	int rej = 0;

	FILE* fp = fopen("print.txt", "rt");

	if (fp == NULL)
	{
		puts("���Ͽ��¿���");
	}

	while (1)
	{

		rej = fscanf(fp, "%s %c %d", name, &sex, &age);
		//,������ �޸��忡�� , �־������ null �̾����Ƿ� ���δ� �̸����� �ν�
		if (rej == EOF)
		{
			break;
		}
		printf("%s %c %d \n", name, sex, age);
	}
	fclose(fp);
	return 0;
}