#include <stdio.h>
int main()
{
	char str[7];
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin);
		printf("read %d : %s\n", i + 1, str);
		//str에 null문자 포함
		//반복문 3번 끝나면 그 뒤 문자 안 적힘

	}
	return 0;
}