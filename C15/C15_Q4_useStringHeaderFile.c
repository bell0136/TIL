#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[50];
	int len = 0;
	int count = 0; //배열의 계산
	int j = 0; //배열의 요소

	printf("문자열입력: \n");
	scanf("%s", str);

	len = strlen(str);
	count = len / 2;

	for (j = 0; j < count; j++)
	{
		if (str[j] == str[len - 1 - j])//-1을 하는 이유는 문자열은 0부터 시작하므로
		{
			if (j == count - 1)
			{
				printf("회문입니다.\n");
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}