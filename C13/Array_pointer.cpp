#include <stdio.h>
int main(void)
{
	int num[3] = {10,20,30};
	int* ptr = &num;
	printf("%d ", ptr[0]);
	printf("%p ", &ptr[0]);

	//ptr������ �迭�� �������� �ʾƵ� []���� �ִ�.
	//pointer = �ּҰ��� ���� ���� + ��� ���� ����
	
	return 0;
}