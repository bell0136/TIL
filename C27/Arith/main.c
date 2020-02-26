#include <stdio.h>
#include "basicArith.h"
#include "areaArith.h"
#include "roundArith.h"
int main()
{
	printf("삼각형의 넓이 = %g\n",triangleArea(4,3));
	printf("원의 넓이 = %g\n",circleArea(2));
	printf("직사각형의 둘레 = %g\n",roundRectangle(2,4));
	printf("정사각형의 둘레 = %g\n",roundSquare(3));
}