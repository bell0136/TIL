#include <stdio.h>
void ShowData(int* ptr) //int * ptr�տ� const�� ���̸� ptr�� �ּҰ��� �ٲ� �� ���µ� �Ʒ��Ͱ��� rptr�� ptr�� ����Ű���� �ع����� rptr�� ���ؼ� ptr�� ����� �ּҰ��� �ٲ� �� �ִ�.
{
	int* rptr = ptr;
	printf("%d\n", *rptr);
	*rptr = 20;//rptr�� ����Ű�� �� = ptr�� �ּҰ�
}
int main(void)
{
	int num = 10;
	int* ptr = &num;
	ShowData(ptr);
	return 0;
}