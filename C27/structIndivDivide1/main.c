#include <stdio.h>
#include "stdiv.h"
#include "indiv.h"
int main()
{
	Div indiv = dividing(5, 2);
	printf("�� = %d\n",indiv.quotient);
	printf("������ = %d\n", indiv.remainder);
}
