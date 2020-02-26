#include "basicArith.h"
#define PI 3.1415
double triangleArea(double base, double height)
{
	return Div(Mul(base, height), 2);
}
double circleArea(double rad)
{
	return Mul(Mul(rad, rad), PI);
}