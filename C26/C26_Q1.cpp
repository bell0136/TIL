#include <stdio.h>
#define add(x,y,z) ((x)+(y)+(z)) 
#define mul(x,y,z) ((x)*(y)*(z)) 

int main()
{
	printf("%d+%d+%d의 값은 %d입니다.\n",4,5,6, add(4, 5, 6));
	printf("%d*%d*%d의 값은 %d입니다.\n",2,3,1, mul(2, 3, 1));
}