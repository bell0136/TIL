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

	strcpy(man1.name, "안성준");
	strcpy(man1.phonenumber, "010-5674-8642");
	man1.age = 20;

	printf("이름 입력");
	scanf("%s", man2.name);
	printf("번호 입력");
	scanf("%s", man2.phonenumber);
	printf("나이 입력");
	scanf("%d", &(man2.age)); 

	printf("man1의 이름 %s\n", man1.name);
	printf("man1의 번호 %s\n", man1.phonenumber);
	printf("man1의 나이 %d\n\n", man1.age);

	printf("man2의 이름 %s\n", man2.name);
	printf("man2의 번호 %s\n", man2.phonenumber);
	printf("man2의 나이 %d\n", man2.age);

	return 0;
}