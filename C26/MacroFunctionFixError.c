#include <stdio.h>
#define minus(x,y) ((x)>(y)?(x)-(y):(y)-(x))
int main()
{
	printf("%d %d�� �� %d\n", 5, 3, minus(5, 3));
	printf("%f %f�� �� %f\n", 2.1, 3.9, minus(2.1, 3.9));
	return 0;
}