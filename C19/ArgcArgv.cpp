#include <stdio.h>
int main(int argc, int * argv)
{
	int i = 0;
	printf("문자열의 수 = %d \n", argc);

	for(i = 0; i < argc; i++)
	{
		printf("%d번째 문자열 : %s \n", i + 1, argv[i]);
	}

	return 0;
}