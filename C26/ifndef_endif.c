#include <stdio.h>
//#define add 
#define min 
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("�ΰ��� ���ڸ� �Է��Ͻÿ�\n");
	scanf("%d %d", &num1, &num2);

#ifndef add
	printf("%d+%d %d\n", num1, num2, num1 + num2);
#endif

#ifndef min
	printf("%d-%d=%d\n", num1, num2, num1 - num2);
#endif
	//#ifndef #endif�� �ּ�ó���� ���� ����� ���� �ּ�ó�� �ȵǾ ��
	//������ �����ϴ�
	return 0;
}