#include <stdio.h>
int main(void)
{
	int i = 0;
	int num;
	printf("수를입력하시오\n");
	scanf("%d", &num);
	while (1)
	{
		num = num / 2;
		if (num == 0)
		{
			break;
		}
		i++;
	}
	printf("%d", i);
}
