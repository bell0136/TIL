#include <stdio.h>
double fct(int)
{
	return 8.8;
}
int main(void)
{
	double (*ptr)(int) = fct;
	printf("%d \n", sizeof(ptr));//int�� double�̵� �����ͺ����� ������ 4byte(32bit)ü��
	printf("%p ", fct);
	return 0;
}