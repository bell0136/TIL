#include <stdio.h> 
int main (void)
{
	char str[50]="I like C programing()";
	printf("%s",str);
	printf("\n");
	str[13]=0;
	printf("%s",str);
	printf("\n");
	str[7]=0;
	printf("%s",str);
	
}
