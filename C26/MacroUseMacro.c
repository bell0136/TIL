#include <stdio.h>
#define PI 3.14
#define sub_rad(x) ((x)*(x)) //식활용할때 주의
#define circle_area(x) (sub_rad(x)*PI) //처음 x에 괄호치기 
int main()
{
	double rad = 2.1;	
	printf("원의 반지름 : %f 넓이 = %f", 2.1, circle_area(rad));
	return 0;
}