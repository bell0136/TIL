#include <stdio.h>
//아스키코드가 가장 큰 글자를 출력하라 
int main(void)
{
	char str[50];

	int i;
	int max;
	int min;
	printf("단어를 입력하세요\n");
	scanf("%s", str);
	max = str[0];
	min = str[0];
	
	for (i = 0; i < 50; i++)
	{
		if (str[i] != 0) {
			break;
		}

		if (max < str[i])
		{
			max = str[i];
		}
	}

	printf("최댓값:%c", max);
}