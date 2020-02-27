#include <stdio.h>
struct complex_number
{
	double real_number;//실수
	double imaginary_number;//허수
};
int main()
{
	struct complex_number num1;
	struct complex_number num2;


	printf("복소수 입력1[실수 허수]:");
	scanf("%lf %lf", &(num1.real_number), &(num1.imaginary_number));
	printf("복소수 입력2[실수 허수]:");
	scanf("%lf %lf", &(num2.real_number), &(num2.imaginary_number));

	double a = num1.real_number;
	double b = num1.imaginary_number;
	double c = num2.real_number;
	double d = num2.imaginary_number;

	printf("합의 결과]: 실수: %lf, 허수: %lf\n",a+c,b+d);
	printf("곱의 결과]: 실수: %lf, 허수: %lf\n",(a*c)-(b*d),(b*c)+(a*d));

	return 0;
}