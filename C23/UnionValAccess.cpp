#include <stdio.h>
union box
{
	int mem1;
	int mem2;
	double mem3;
};
int main()
{
	union box ubox;
	ubox.mem1 = 10;
	printf("%d\n", ubox.mem1);
	ubox.mem2 = 4;//mem2�� �ϸ� �ƿ� �̻��� ���� ����
	printf("%d\n", ubox.mem1);
	printf("%d\n", ubox.mem2);
	printf("%g\n", ubox.mem3);

	return 0;
}