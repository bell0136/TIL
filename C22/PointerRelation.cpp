#include <stdio.h>
struct point
{
	int xpos;
	int ypos;
	struct point* ptr;
};
int main()
{
	struct point pos1, pos2, pos3;
	pos1 = { 1,1 };
	pos2 = { 2,2 };
	pos3 = { 3,3 };
	pos1.ptr = &pos2;
	pos2.ptr = &pos3;
	pos3.ptr = &pos1;

	printf("연결관계\n");
	printf("[%d %d][%d %d]\n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
	printf("[%d %d][%d %d]\n", pos2.xpos, pos2.ypos, pos3.xpos, pos3.ypos);
	printf("[%d %d][%d %d]\n", pos3.xpos, pos3.ypos, pos1.xpos, pos1.ypos);

	return 0;
}