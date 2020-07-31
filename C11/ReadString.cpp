#include <stdio.h>
int main (void)
{
	int i=0;
	char str[50];
	printf("단어를 입력하시오\n");
	scanf("%s",str);
	for(i=0; str[i]!=0; i++)
	{
		printf("%c",str[i]);
	} 		
	return 0;
}
