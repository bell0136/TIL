#include <stdio.h>
#define PI 3.14
#define circle_area(x) ((x)*(x)*PI)
int main()
{
	printf("반지름이 %d인 원의 넓이는 %f입니다.\n", 5, circle_area(5));
	return 0;
}