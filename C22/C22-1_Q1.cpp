#include <stdio.h>
struct employee
{
	char name[20];
	char id[20];
	int money;
};
int main(void)
{
	struct employee man1;
	fputs("�̸��з�", stdout);
	scanf("%s", man1.name);
	fputs("�ֹε�Ϲ�ȣ�Է�", stdout);
	scanf("%s", man1.id);
	fputs("�޿��Է�", stdout);
	scanf("%d", &(man1.money));

	printf("man1�� �̸� : %s\n", man1.name);
	printf("man1�� �ֹε�Ϲ�ȣ : %s\n", man1.id);
	printf("man1�� �޿� : %d\n", man1.money);

	return 0;
}
