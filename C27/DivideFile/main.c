#include <stdio.h>
extern void Increment();
extern int Getnum();

int main()
{
	//���� num�� ������ ������ �ȵ�
	Increment();
	printf("%d\n", Getnum());
	Increment();
	printf("%d\n", Getnum());

	return 0;
}
