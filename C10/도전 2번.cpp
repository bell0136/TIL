#include <stdio.h>
int main(void)
{
	int dan1;//�ǽ¼� (from)
	int dan2;//�ǽ¼� (to) 
	int is = 1;//�¼� 
	printf("�ΰ��� ������ �Է��Ͻÿ�.\n");
	scanf("%d %d", &dan1, &dan2);
	if (dan1 < dan2)
	{
		for (; dan1 <= dan2; dan1++)
		{

			for (is = 1; is < 10; is++)
			{
				printf("%dX%d=%d\n", dan1, is, dan1 * is);
			}
		}
	}
	else if (dan2 < dan1)
	{
		for (; dan2 <= dan1; dan2++)
		{

			for (is = 1; is < 10; is++)
			{
				printf("%dX%d=%d\n", dan2, is, dan2 * is);
			}
		}
	}

}
