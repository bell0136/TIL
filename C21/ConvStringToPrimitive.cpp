#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[30];
	printf("�����Է��Ͻÿ�\n");
	scanf("%s", str);
	printf("%d\n", atoi(str));

	printf("�Ǽ��Է��Ͻÿ�(6�ڸ�)\n"); //double
	scanf("%s", str);
	printf("%g\n", atof(str)); //%f�� float, double�� ��� ���Ĺ���

	printf("�����Է��Ͻÿ�\n"); //long�̹Ƿ� ��û ū ��
	scanf("%s", str);
	printf("%l\n", atol(str));
	
	return 0;
}