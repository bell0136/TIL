#include <stdio.h>
struct point
{
	int xpos;
	int ypos;
};
struct person
{
	char name[20];
	char phonenum[20];
	int age;
};
int main()
{
	struct point pos = {10,20};
	struct person man = { "string","010-2637-9798",30 };

	printf("[%p %p]\n", &pos, &pos.xpos);
	printf("[%p %p]\n", &man, &man.name);
	//����ü ������ �ּҰ��� ù��° ����� �ּҰ��� �����ϴ�
}