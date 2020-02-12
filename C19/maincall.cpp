#include <stdio.h>
int main(int rgc, int* rgv)
{
	int i = 0;
	printf("문자열의수 = %d \n", rgc);

	for (i = 0; i < rgc; i++)
	{
		printf("%d번째 문자열­ : %s \n", i + 1, rgv[i]);
	}

	return 0;
}