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
		puts("파일오픈오류");
	}

	while (1)
	{

		rej = fscanf(fp, "%s %c %d", name, &sex, &age);
		//,넣으면 메모장에도 , 넣어줘야함 null 이없으므로 전부다 이름으로 인식
		if (rej == EOF)
		{
			break;
		}
		printf("%s %c %d \n", name, sex, age);
	}
	fclose(fp);
	return 0;
}