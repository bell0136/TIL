#include <stdio.h>
struct point
{
	int xpos;
	int ypos;
};
void trans(point* ptr)
{
	struct point pos;
	
	ptr->xpos = (*ptr).xpos * -1;//�����Ҷ� �����͸� ����� main�Լ��� pos�� �����Ͽ� ���� �ٲ� �� �ִ� (�翬��)
	ptr->ypos = (*ptr).ypos * -1;	
}
void showtrans(point pos)
{
	printf("x,y�� ��ǥ [%d %d]", pos.xpos, pos.ypos);
}
int main()
{
	struct point pos;
	pos = { 5,-7 };
	trans(&pos);
	showtrans(pos);
}