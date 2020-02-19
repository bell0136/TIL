#include <stdio.h>
#include <string.h>
#pragma warning( disable:4996)
int main()
{
	char str1 [10] = {"123456"};
	char str2[10] = {"spri"};
	int i = 0;

	//strcpy(str2, str1);
	//printf("%s", str2);

	/*for (i = 0; i < 10; i++)
	{
		printf("%c", str1[i]);		
	}*/

	printf("문자열 입력\n");
	scanf("%s", str1);

	for (i = 0; i < 10; i++)
	{
		printf("%c\n", str1[i]);
	}
}