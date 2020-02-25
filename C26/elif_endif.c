#include <stdio.h>
#define num 7
int main()
{
#if num == 6
	puts("현재 숫자는 6입니다.");
#elif num  == 7
	puts("현재 숫자는 7입니다.");
#elif num  == 8
	puts("현재 숫자는 8입니다.");
#else
	puts("현재 숫자는 6,7,8 모두 아닙니다.");
#endif

	return 0;
}