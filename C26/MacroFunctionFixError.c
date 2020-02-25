#include <stdio.h>
#define minus(x,y) ((x)>(y)?(x)-(y):(y)-(x))
int main()
{
	printf("%d %d의 차 %d\n", 5, 3, minus(5, 3));
	printf("%f %f의 차 %f\n", 2.1, 3.9, minus(2.1, 3.9));
	return 0;
}