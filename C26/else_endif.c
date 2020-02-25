#include <stdio.h>
#define num 6
int main()
{
#if num == 5
	puts("숫자는 현재 5입니다.");
#else 
	puts("숫자는 현재 5가 아닙니다.");
#endif

	return 0;
}