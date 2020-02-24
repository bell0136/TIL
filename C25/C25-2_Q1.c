#include <stdio.h>
#include <stdlib.h>
void clear(void)
{
	while (getchar() != '\n')
	{

	}
}
int main(void)
{
	int size = 0;
	int i = 0;
	int num = 0;

	puts("문자열 길이 정보를 입력하시오.");
	scanf("%d", &num);
	clear();
	char* str1 = (char*)malloc(sizeof(char) * num);
	char *reverse_str1 = (char*)malloc(sizeof(char) * num);
	puts("문자열입력하시오");
	gets(str1);

	for (i = 0; i < num; i++)
	{
		size = num - 1;
		reverse_str1[size - i] = str1[i];
	}	

	for (i = 0; i < num; i++)
	{
		printf("%c", reverse_str1[i]);
	}
	//free(str1);
	free(reverse_str1);
	return 0;
}