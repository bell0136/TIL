#include <stdio.h>
int main(void)
{
	/*int num1 = 100;
	int num2 = 200;
	int* pnum;//�����ͺ��� pnum����
	pnum = &num1; //num1�� �ּҰ� ��ȯ
	printf("%p\n", pnum);

	(*pnum) += 30; // pnum�� num1�� 
	pnum = &num2; //num2�� �ּҰ� ��ȯ
	printf("%p\n", pnum);
	(*pnum) -= 30;
	printf("num1:%d, num2:%d\n", num1, num2);
	return 0;
	//������ ��� %p
	//*pnum�� pnum�� ����Ű�� ����
	//pnum=&num1 ������pnum�� num1�� ����Ŵ*/

	//self

	int num1 = 100;
	int num2 = 100;
	int *pnum;//�����ͺ�������

	pnum = &num1;
	*pnum += 30;//*pnum�� num1�� ���� ����Ű�ϱ� 130�̴�
	printf("%p\n", pnum);
	//printf("%d\n", pnum);
	printf("%d\n", *pnum);
	//printf("%p\n", *pnum);

	//*pnum�� num�� ����Ű�Ƿ� %d���, pnum�� num�� �ּҸ� ����Ű�Ƿ� %p���

	return 0;
}