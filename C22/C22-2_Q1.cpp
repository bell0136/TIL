#include <stdio.h>
struct employee
{
	char name[20];
	char phonenum[20];
	int age;
};
int main()
{
	struct employee arr[3];
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		puts("�̸��Է�");
		scanf("%s", arr[i].name);
		puts("��ȣ�Է�");
		scanf("%s", arr[i].phonenum);
		puts("�����Է�");
		scanf("%d",&( arr[i].age));
	}

	for (i = 0; i < 3; i++)
	{
		printf("�̸� : %s\n", arr[i].name);
		printf("��ȣ : %s\n", arr[i].phonenum);
		printf("���� : %d\n", arr[i].age);
		printf("\n");
	}
	return 0;
}