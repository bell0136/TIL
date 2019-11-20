#include <stdio.h>
int main(void)
{
	/*double num = 3.14;
	int* pnum = &num;
	printf("%d", pnum);*/


	double num = 3.14;
	double * pnum = &num;
	printf("%lf", pnum);

	return 0;
}