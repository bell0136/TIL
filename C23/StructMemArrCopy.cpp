#include <stdio.h>
typedef struct person
{
	char name[20];
	char phone[20];
	int age;
}Person;
person input_mem(void)
{
	struct person man;
	printf("�̸��� �Է��Ͻÿ�.\n");
	scanf("%s", man.name);
	printf("��ȣ�� �Է��Ͻÿ�.\n");
	scanf("%s", man.phone);
	printf("���̸� �Է��Ͻÿ�.\n");
	scanf("%d", &man.age);
	return man;
}
void Showmem(person man) //struct person man(o), person man(o), Person man(o), struct Person man(X)
{
	printf("�̸� %s\n", man.name);
	printf("��ȣ %s\n", man.phone);
	printf("���� %d\n", man.age); //���Ĺ��� ����� ����
}
int main()
{
	struct person man;
	man = input_mem();
	Showmem(man);
}