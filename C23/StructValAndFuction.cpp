#include <stdio.h>
struct point
{
	int xpos;
	int ypos;
};
point currentPosition(void)
{
	struct point pos;
	printf("x�� y�� ���� ���� �����ÿ�.\n");
	scanf("%d %d", &pos.xpos, &pos.ypos);
	return pos;
}
void ShowPosition(point pos)
{
	printf("[%d %d]", pos.xpos,pos.ypos);
}

int main(void)
{
	struct point cen;
	cen = currentPosition();
	ShowPosition(cen);	
}