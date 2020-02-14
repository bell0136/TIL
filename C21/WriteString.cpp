#include <stdio.h>
int main()
{
	const char * str = { "spring" };
	printf("1---------------------\n");
	puts(str);
	puts("it's spring");
	printf("2---------------------\n");
	fputs(str, stdout);
	printf("\n");
	fputs("summer", stdout);
	printf("\n");
	printf("3---------------------\n");

	//puts는\n을 포함하고 있다.
	return 0;
}