#include <stdio.h>
typedef struct div
{
	int quotient;//¸ò
	int remainder;//³ª¸ÓÁö
}Div;
extern Div dividing(num1, num2);
int main()
{
	Div indiv = dividing(3, 2);
	printf("¸ò = %d\n",indiv.quotient);
	printf("³ª¸ÓÁö = %d\n", indiv.remainder);
}
