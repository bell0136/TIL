#include <stdio.h>
//#define stdnum(Y,S,P) (((Y)*(100000))+((S)*(1000))+((P)))
#define stdnum(Y,S,P) Y##S##P
int main()
{
	printf("�й� %d\n", stdnum(18, 18, 705));
	return 0;
}