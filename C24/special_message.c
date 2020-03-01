#include <stdio.h>
int main()
{
	printf("helloworld\n");
	printf("helloworld\a");
	printf("helloworld\b"); //맨뒤에 것이 안나옴
	printf("helloworld\f");
	printf("helloworld\r");
	printf("\thelloworld\t"); 
	printf("\vhelloworld\v");
	printf("helloworld\'");
	printf("helloworld\"");
	printf("helloworld\?");
	printf("helloworld\\");
	return 0;
}