#include <stdio.h>
int main(void)
{
	int dan1;//�ǽ¼� (from)
	int dan2;//�ǽ¼� (to) 
	int is = 1;//�¼� 
	int n = 0;
	int k = 0;
	printf("�ΰ��� ������ �Է��Ͻÿ�.\n");
	scanf("%d %d", &dan1, &dan2);
	if (dan1 < dan2)
	{
		k = dan1;
		n = dan2; //ū��
	}
	if (dan2 < dan1)
	{
		k = dan2;
		n = dan1;
	}

	for (k; k <= n; k++)
	{
		for (is = 1; is < 10; is++)
		{
			printf("%d X %d = %d\n", k, is, k * is);
		}
	}
}