#include <stdio.h>
void SwapIntPtr(int** dptr1,int** dptr2)
{
	int* temp;
	temp = *dptr1;
	*dptr1 = *dptr2;
	*dptr2 = temp;
	/*�ٲٷ��� �ϴ� �� = num�� �� temp�� �׳� dptr1�� �����ϸ� ptr1�� �ּҰ��� ���ԵǴ� �Ŵ�. 
	ptr1�� ����Ű�� num�� �ּҰ�(!)�� �������� *dptr1�ؾߵ� 
	**dptr1�� num�� ���� �ٲܶ�*/
}
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;

	printf("%d %d\n", *ptr1, *ptr2);
	printf("%p %p\n", ptr1, ptr2);
	SwapIntPtr(&ptr1, &ptr2);
	printf("%d %d\n", *ptr1, *ptr2);
	printf("%p %p\n", ptr1, ptr2);
}