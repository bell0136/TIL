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

	struct point* pptr = &pos1; //point ����ü�� ����ü���� pos1�� ����Ű�� (�ڷ���-����Ű�� ���� ����) pptr(�����ͺ���)
	(*pptr).xpos += 4;
	(*pptr).ypos += 5;

	printf("[%d %d]\n", pptr->xpos, pptr->ypos);//->����ü ������ ����� ����Ű�� �����ͺ��� pptr

	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	printf("[%d %d]\n", pptr->xpos, pptr->ypos);

	return 0;

}