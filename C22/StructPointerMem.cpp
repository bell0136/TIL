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

	printf("������ ���� : %d\n", ring.radius);
	printf("���� �߽� : %d %d", (ring.center)->xpos, (ring.center)->ypos);
}