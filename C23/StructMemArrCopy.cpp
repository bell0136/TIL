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
	printf("이름을 입력하시오.\n");
	scanf("%s", man.name);
	printf("번호를 입력하시오.\n");
	scanf("%s", man.phone);
	printf("나이를 입력하시오.\n");
	scanf("%d", &man.age);
	return man;
}
void Showmem(person man) //struct person man(o), person man(o), Person man(o), struct Person man(X)
{
	printf("이름 %s\n", man.name);
	printf("번호 %s\n", man.phone);
	printf("나이 %d\n", man.age); //서식문자 제대로 적기
}
int main()
{
	struct person man;
	man = input_mem();
	Showmem(man);
}