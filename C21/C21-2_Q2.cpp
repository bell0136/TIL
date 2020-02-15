#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int erase(char * str)
{
	int i = 0;

	while (1)
	{
		if (str[i] == '\n')
		{
			break;
		}
		i++;
		
	}
	
	return i;
}
int main(void)
{
	char str1[20];
	char str2[20];
	char str3[40];

	printf("문자열1 입력: \n");
	fgets(str1, sizeof(str1), stdin);	
	str1[erase(str1)] = 0;
	strcpy(str3, str1);
	
	printf("문자열2 입력: \n");
	fgets(str2, sizeof(str1), stdin);
	str2[erase(str2)]=0;
	strcat(str3, str2);
	
	fputs(str3,stdout);
}