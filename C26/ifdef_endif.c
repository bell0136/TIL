#include <stdio.h>
#define add 0
#define min 1 
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("두개의 숫자를 입력하시오\n");
	scanf("%d %d", &num1, &num2);

#ifdef add
	printf("%d+%d %d\n", num1, num2, num1 + num2);
#endif

#ifdef min
	printf("%d-%d=%d\n", num1, num2, num1 - num2);
#endif
	//#if #endif는 1로 반환되는 것만 계산을 했지만 #ifdef #endif는 1이든 0이든 반환되는 것에 상관없이 실행됨
	//매크로 값은 중요치않기 때문에 생략도 가능하다
	return 0;
}