#include <stdio.h>
#include <math.h>

struct point
{
	int xpos;
	int ypos;
};
void squarearea(struct point* point1, struct point* point2)
{
	int arearesult = sqrt((point2->xpos-point1->xpos)* (point2->xpos - point1->xpos)+(point1->ypos - point1->ypos)*(point1->ypos - point1->ypos)) 
		* sqrt((point2->xpos-point2->xpos)* (point2->xpos - point2->xpos)+(point2->ypos - point1->ypos)*(point2->ypos - point1->ypos));
	printf("직사각형의 넓이=%d\n",arearesult );
}
void showpoint(struct point * point1, struct point * point2)
{
	printf("[%d, %d]\n", point1->xpos, point1->ypos);
	printf("[%d, %d]\n", point1->xpos, point2->ypos);
	printf("[%d, %d]\n", point2->xpos, point1->ypos);
	printf("[%d, %d]\n", point2->xpos, point2->ypos);
}
int main()
{
	struct point square1 = {0,0};
	struct point square2 = {100,100};
	squarearea(&square1,&square2);
	showpoint(&square1, &square2);
 }