#include <stdio.h>
void ClearLineFromReadBuffer()
{
	while (getchar() != '\n');
}
int main()
{
	char id[7];
	char name[10];

	fputs("�ֹι�ȣ�Է�: ", stdout);
	fgets(id, sizeof(id), stdin);
	ClearLineFromReadBuffer();

	fputs("�̸��Է�: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("�ֹι�ȣ: %s\n", id);
	printf("�̸�: %s\n", name);
	return 0;
}