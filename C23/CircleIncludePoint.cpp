#include <stdio.h>
struct point
{
	int xpos;
	int ypos;
};
struct circle
{
	struct point cen;
	double radius;
};
void showrad(struct circle * cptr)
{
	printf("[%d %d]\n", cptr->cen.xpos, cptr->cen.ypos);
	printf("%f\n", cptr->radius);
}
int main()
{
	struct circle c1 = {{1,2},3.5 };
	struct circle c2 = { {2,4},3.9 };
	showrad(&c1);
	showrad(&c2);
}