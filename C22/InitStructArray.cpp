#include <stdio.h>
struct person
{
	char name[20];
	char phonenum[20];
	int age;
};
int main()
{
	struct person arr[3] = { { "string","010-2323-3423",22 }, { "spring","010-2312-2312",43 }, {"summer","010-2367-6756",30} };
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		printf("이름 %s\n", arr[i].name);
		printf("번호 %s\n", arr[i].phonenum);
		printf("나이 %d\n", arr[i].age);
		printf("\n");
	}

	return 0;
}