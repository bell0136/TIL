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
	struct person man = {"spring","010-4536-2831",22};

	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s \n%s \n%d \n", man.name, man.phonenum, man.age);

	return 0;
}