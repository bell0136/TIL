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
	fputs("이름압력", stdout);
	scanf("%s", man1.name);
	fputs("주민등록번호입력", stdout);
	scanf("%s", man1.id);
	fputs("급여입력", stdout);
	scanf("%d", &(man1.money));

	printf("man1의 이름 : %s\n", man1.name);
	printf("man1의 주민등록번호 : %s\n", man1.id);
	printf("man1의 급여 : %d\n", man1.money);

	return 0;
}
