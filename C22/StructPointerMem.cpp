#include <stdio.h>
struct point
{
	int xpos;
	int ypos;
};

struct circle
{	
	double radius;
	struct point* center;
	
};
int main()
{
	double rad = 5.5;
	struct point cen = { 2,7 };
	struct circle ring = { rad, &cen };

	printf("반지름 길이 : %d\n", ring.radius);
	printf("원의 중심 : %d %d", (ring.center)->xpos, (ring.center)->ypos);
}