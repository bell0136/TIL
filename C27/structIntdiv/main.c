#include <stdio.h>
typedef struct div
{
	int quotient;//��
	int remainder;//������
}Div;
extern Div dividing(num1, num2);
int main()
{
	Div indiv = dividing(3, 2);
	printf("�� = %d\n",indiv.quotient);
	printf("������ = %d\n", indiv.remainder);
}
