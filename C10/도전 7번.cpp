#include <stdio.h>
int main(void)
{
	int i = 0;
	int num;
	printf("�����Է��Ͻÿ�\n");
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
