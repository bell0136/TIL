#include <stdio.h>
#include "basicArith.h"
#include "areaArith.h"
#include "roundArith.h"
int main()
{
	printf("�ﰢ���� ���� = %g\n",triangleArea(4,3));
	printf("���� ���� = %g\n",circleArea(2));
	printf("���簢���� �ѷ� = %g\n",roundRectangle(2,4));
	printf("���簢���� �ѷ� = %g\n",roundSquare(3));
}