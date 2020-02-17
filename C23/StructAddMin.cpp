#include <stdio.h>
struct point
{
	int xpos;
	int ypos;
};
int positionadd(point ptradd,point ptradd1)
{
	int add = 0;
	add = ptradd.xpos;
	add += ptradd1.ypos;

	return add;
}
int positionminus(point ptrmin, point ptrmin1)
{
	int minus = 0;
	minus = ptrmin.xpos;
	minus -= ptrmin1.ypos;

	return minus;
}
int main()
{
	struct point pos1 = {5,6};
	struct point pos2 = { 2,9 };
	int result1, result2;
	result1 = positionadd(pos1, pos1);
	result2 = positionminus(pos1, pos1);
	printf("x,y 渦и 高, x,y賓 高[%d %d]\n", result1,result2);
	
	result1 = positionadd(pos2, pos2);
	result2 = positionminus(pos2, pos2);
	printf("x,y 渦и 高, x,y賓 高[%d %d]\n", result1, result2);
}