#include <stdio.h>
int main(void)
{
	int num = 10;
	int * ptr1 = &num;
	//num�� �ּҰ��� ptr1�̸��� ������ �����ϰڴ�.
	int * ptr2 = ptr1;
	//ptr1 �ּҸ� ptr2�����Ϳ� ����

	(*ptr1)++; // ptr1�� ����Ǿ��ִ� num�� ������
	(*ptr2)++; // ptr2�� ����Ǿ��ִ� ptr1�� ������ (=num�� +1,+1)
	printf("%d\n", num);//num�� 12��

	/*
	 num - ptr1(�ּҰ�) -ptr2(�ּҰ�) - ó�� ����

	 ptr1�� ptr2�� ����Ű�� ������ ������
	 ptr1 - num
	 ptr2 - num
	*/
	return 0;
}