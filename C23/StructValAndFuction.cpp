#include <stdio.h>
struct point
{
	int xpos;
	int ypos;
};
point currentPosition(void)
{
	struct point pos;
	printf("x와 y의 값을 각각 적으시오.\n");
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