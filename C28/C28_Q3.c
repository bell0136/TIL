#include <stdio.h>
struct complex_number
{
	double real_number;//�Ǽ�
	double imaginary_number;//���
};
int main()
{
	struct complex_number num1;
	struct complex_number num2;


	printf("���Ҽ� �Է�1[�Ǽ� ���]:");
	scanf("%lf %lf", &(num1.real_number), &(num1.imaginary_number));
	printf("���Ҽ� �Է�2[�Ǽ� ���]:");
	scanf("%lf %lf", &(num2.real_number), &(num2.imaginary_number));

	double a = num1.real_number;
	double b = num1.imaginary_number;
	double c = num2.real_number;
	double d = num2.imaginary_number;

	printf("���� ���]: �Ǽ�: %lf, ���: %lf\n",a+c,b+d);
	printf("���� ���]: �Ǽ�: %lf, ���: %lf\n",(a*c)-(b*d),(b*c)+(a*d));

	return 0;
}