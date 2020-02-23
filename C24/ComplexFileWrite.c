#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	FILE* fp = fopen("print.txt", "wt");
	char name[10];
	char sex=0;
	int age=0;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("이름, 성별, 나이 입력\n");
		scanf("%s %c %d", &name, &sex, &age);
		getchar();
		fprintf(fp,"%s %c %d", name, sex, age);
	}

	fclose(fp);
	return 0;


}