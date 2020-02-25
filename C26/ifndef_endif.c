#include <stdio.h>
//#define add 
#define min 
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("두개의 숫자를 입력하시오\n");
	scanf("%d %d", &num1, &num2);

#ifndef add
	printf("%d+%d %d\n", num1, num2, num1 + num2);
#endif

#ifndef min
	printf("%d-%d=%d\n", num1, num2, num1 - num2);
#endif
	//#ifndef #endif는 주석처리된 것이 실행됨 굳이 주석처리 안되어도 됨
	//생략도 가능하다
	return 0;
}