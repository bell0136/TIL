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
		puts("이름입력");
		scanf("%s", arr[i].name);
		puts("번호입력");
		scanf("%s", arr[i].phonenum);
		puts("나이입력");
		scanf("%d",&( arr[i].age));
	}

	for (i = 0; i < 3; i++)
	{
		printf("이름 : %s\n", arr[i].name);
		printf("번호 : %s\n", arr[i].phonenum);
		printf("나이 : %d\n", arr[i].age);
		printf("\n");
	}
	return 0;
}