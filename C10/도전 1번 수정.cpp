#include <stdio.h>
int main(void)
{
	int num = 0;
	printf("숫자를 입력하시오\n");
	scanf("%d", &num);
	printf("10진수의 16진수 표현 : %x", num);
}
