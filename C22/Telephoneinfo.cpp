#include <stdio.h>
#include <string.h>
struct person
{
	char name[10];
	char phonenumber[20];
	int age;
};
int main()
{
	struct person man1, man2;

	strcpy(man1.name, "�ȼ���");
	strcpy(man1.phonenumber, "010-5674-8642");
	man1.age = 20;

	printf("�̸� �Է�");
	scanf("%s", man2.name);
	printf("��ȣ �Է�");
	scanf("%s", man2.phonenumber);
	printf("���� �Է�");
	scanf("%d", &(man2.age)); 

	printf("man1�� �̸� %s\n", man1.name);
	printf("man1�� ��ȣ %s\n", man1.phonenumber);
	printf("man1�� ���� %d\n\n", man1.age);

	printf("man2�� �̸� %s\n", man2.name);
	printf("man2�� ��ȣ %s\n", man2.phonenumber);
	printf("man2�� ���� %d\n", man2.age);

	return 0;
}