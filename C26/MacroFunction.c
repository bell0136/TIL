#include <stdio.h>
#define square(x)x*x
int main()
{
	int n = 5;
	printf("%d\n", square(n));

	n = -7;
	printf("%d\n", square(n));

	double n2 = 5.5;
	printf("%f\n", square(n2));

	printf("%d\n", square((3+2)));

}