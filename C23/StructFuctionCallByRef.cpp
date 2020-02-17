#include <stdio.h>
struct point
{
	int xpos;
	int ypos;
};
void trans(point* ptr)
{
	struct point pos;
	
	ptr->xpos = (*ptr).xpos * -1;//연산할때 포인터를 써줘야 main함수의 pos애 접근하여 값을 바꿀 수 있다 (당연함)
	ptr->ypos = (*ptr).ypos * -1;	
}
void showtrans(point pos)
{
	printf("x,y의 좌표 [%d %d]", pos.xpos, pos.ypos);
}
int main()
{
	struct point pos;
	pos = { 5,-7 };
	trans(&pos);
	showtrans(pos);
}