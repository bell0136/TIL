#include <stdio.h>
typedef struct point
{
	int xpos;
	int ypos;
};
void SwapPoint(point * pos1,point * pos2)
{
	int x_temp = 0;
	int y_temp = 0;

	x_temp = pos1->xpos;
	pos1->xpos = pos2->xpos;
	pos2->xpos = x_temp;

	y_temp = pos1->ypos;
	pos1->ypos = pos2->ypos;
	pos2->ypos = y_temp;

}
int main()
{
	struct point pos1 = { 2,4 }; 
	struct point pos2 = { 5,7 };

	SwapPoint(&pos1, &pos2);
	printf("[%d %d]\n",pos1.xpos,pos1.ypos); 
	printf("[%d %d]\n", pos2.xpos, pos2.ypos);

	return 0;
}