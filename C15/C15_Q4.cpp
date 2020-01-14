#include <stdio.h>
void Palindrome(int count, char * str, int len)
{
	int j = 0;
	for (j = 0; j < count; j++)
		{
			if (str[j] == str[len - 1 - j])//-1을 하는 이유는 문자열은 0부터 시작하므로
			{
				if (j == count-1)
				{
					printf("회문입니다.\n");
				}
			}
		}
}
int main(void)
{
	char str[50] = {};
	int len = 0;
	int count = 0; //배열의 계산
	int j = 0; //배열의 요소

	printf("문자열입력: \n");
	scanf("%s", str);

	while (str[len] != '\0')
	{
		len++;
	}// len == 글자 수 세기, 원래는 1을 빼야하지만 0부터 시작하므로 그냥 냅둔다.
	
	count = len / 2;
	Palindrome(len / 2, str, len);	
}