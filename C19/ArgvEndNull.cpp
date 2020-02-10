#include <stdio.h>
int main(int argc, char* argv[])
{
	int i = 0;
	printf("문자열\n");

	while (argv[i] != NULL)
	{
		printf("%d번째 문자열 = %s\n", i + 1, argv[i]);
		i++;
	}
	return 0;
}