#include <stdio.h>
int main()
{
	char str[7];
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin);
		printf("read %d : %s\n", i + 1, str);
		//str�� null���� ����
		//�ݺ��� 3�� ������ �� �� ���� �� ����

	}
	return 0;
}