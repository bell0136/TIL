#include <stdio.h>
#include "stdiv.h"
#include "indiv.h"
int main()
{
	Div indiv = dividing(5, 2);
	printf("¸ò = %d\n",indiv.quotient);
	printf("³ª¸ÓÁö = %d\n", indiv.remainder);
}
