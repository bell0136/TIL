#include <stdio.h>
#define add 0
#define min 1 //1인것만 계산
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("두개의 숫자를 입력하시오\n");
	scanf("%d %d", &num1, &num2);

#if add
	printf("%d+%d %d", num1, num2, num1+num2);
#endif

#if min
	printf("%d-%d=%d", num1, num2, num1-num2);
#endif

	return 0;
}