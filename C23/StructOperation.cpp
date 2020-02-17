#include <stdio.h>
struct point
{
	int xpos;
	int ypos;
};
int main()
{
	struct point pos1 = {1,2};
	struct point pos2;

	pos2 = pos1;

	printf("%d\n", sizeof(pos1)); //sizeof(pos1)의 값은 자료형*개수 8=4*2
	printf("[%d %d]\n", pos1.xpos, pos1.ypos);
	printf("%d\n", sizeof(pos2));
	printf("[%d %d]\n", pos2.xpos, pos2.ypos);

}