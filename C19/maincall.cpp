#include <stdio.h>
int main(int rgc, int* rgv)
{
	int i = 0;
	printf("���ڿ��Ǽ� = %d \n", rgc);

	for (i = 0; i < rgc; i++)
	{
		printf("%d��° ���ڿ��� : %s \n", i + 1, rgv[i]);
	}

	return 0;
}