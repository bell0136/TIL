#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int size = 0;
	int i = 0;
	int num = 0;
	int n = 1;

	int* ptr1 = (int*)malloc(sizeof(int) * 5);

	while (num != -1)
	{
		printf("숫자입력하시오");
		scanf("%d", &num);
		ptr1[i] = num;
		printf("%d\n", ptr1[i]);
		i++;
		if (i == n*5)
		{
			ptr1 = realloc(ptr1, sizeof(int)*3);
			n++;
		}
	}	
	return 0;
}
