#include <stdio.h>
struct point
{
	int xpos;
	int ypos;
};
int main()
{
	struct point pos1, pos2; 
	pos1 = { 10,20 };
	pos2 = { 100,200 };

	struct point* pptr = &pos1; //point 구조체의 구조체변수 pos1를 가리키는 (자료형-가리키는 것의 정보) pptr(포인터변수)
	(*pptr).xpos += 4;
	(*pptr).ypos += 5;

	printf("[%d %d]\n", pptr->xpos, pptr->ypos);//->구조체 변수의 멤버를 가리키는 포인터변수 pptr

	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	printf("[%d %d]\n", pptr->xpos, pptr->ypos);

	return 0;

}