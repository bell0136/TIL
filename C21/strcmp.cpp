#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main(void)
{
	char str1[20];
	char str2[20];

	printf("문자열1 입력 : \n");
	scanf("%s", str1);
	printf("문자열2 입력 : \n");
	scanf("%s", str2);

	if (!strcmp(str1, str2))//0은 거짓을 의미하므로 1반환
	{
		puts("두 문자열은 동일합니다");
	}
	else
	{
		puts("두 문자열은 동일하지 않습니다");
		if (!strncmp(str1, str2, 3))
		{
			puts("하지만 앞의 3글자는 동일합니다.");
		}
	}
	return 0;

}