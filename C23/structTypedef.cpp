#include <stdio.h>
struct point
{
	int xpos;
	int ypos;
};
typedef struct person
{
	char name[20];
	char phone[14];
	int age;
}person;
int main()
{
	typedef struct point point;
	point pos = { 10,20 }; //typedef������ ��������� struct point pos�ؾߵ�
	person man = { "string","010-2939-2384",13 };
	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d", man.name, man.phone, man.age);

	return 0;
}