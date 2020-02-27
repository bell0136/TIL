#include <stdio.h>
#include "stdiv2.h"
#include "intdiv4.h"

int main()
{
	Div val = dividing(5, 2);
	printf("³ª¸ÓÁö = %d\n", val.quotient);
	printf("¸ò = %d\n", val.remainder);

	return 0;

}