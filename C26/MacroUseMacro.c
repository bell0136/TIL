#include <stdio.h>
#define PI 3.14
#define sub_rad(x) ((x)*(x)) //��Ȱ���Ҷ� ����
#define circle_area(x) (sub_rad(x)*PI) //ó�� x�� ��ȣġ�� 
int main()
{
	double rad = 2.1;	
	printf("���� ������ : %f ���� = %f", 2.1, circle_area(rad));
	return 0;
}