#include <stdio.h>
#define add 0
#define min 1 
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("�ΰ��� ���ڸ� �Է��Ͻÿ�\n");
	scanf("%d %d", &num1, &num2);

#ifdef add
	printf("%d+%d %d\n", num1, num2, num1 + num2);
#endif

#ifdef min
	printf("%d-%d=%d\n", num1, num2, num1 - num2);
#endif
	//#if #endif�� 1�� ��ȯ�Ǵ� �͸� ����� ������ #ifdef #endif�� 1�̵� 0�̵� ��ȯ�Ǵ� �Ϳ� ������� �����
	//��ũ�� ���� �߿�ġ�ʱ� ������ ������ �����ϴ�
	return 0;
}