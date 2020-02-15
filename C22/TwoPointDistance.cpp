#include <stdio.h>
#include <math.h>

struct point
{
	int xpos;
	int ypos;
};

int main(void)
{
	struct point pos1, pos2;
	double distance = 0.0;
	fputs("두 점을 입력하시오",stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos);

	fputs("두 점을 입력하시오",stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);

	distance = sqrt((double)(pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos));

	printf("두 점사이의 거리 = %f", distance);


	
}