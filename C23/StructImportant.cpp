#include <stdio.h>
struct student
{
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int age;
};
void Showstudent(student * ptr)
{
	int i = 0;	

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", ptr[i].name);
		printf("%s\n", ptr[i].stdnum);
		printf("%s\n", ptr[i].school);
		printf("%s\n", ptr[i].major);
		printf("%d\n", ptr[i].age);
	}
}
int main()
{
	struct student arr[3];
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("�̸�\n");
		scanf(" %s", arr[i].name);
		printf("�й�\n");
		scanf(" %s", arr[i].stdnum);
		printf("�б�\n");
		scanf(" %s", arr[i].school);
		printf("����\n");
		scanf(" %s", arr[i].major);
		printf("����\n");
		scanf(" %d", &arr[i].age);
	}

	Showstudent(arr);
	
}