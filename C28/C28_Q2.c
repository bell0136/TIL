#include <stdio.h>
#include <stdlib.h>
struct point
{
	char author[20];
	char title[20];
	int page;
};
int main()
{
	struct point* arr[3];
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		arr[i] = malloc(sizeof(struct point));
	}
		
	for (i = 0; i < 3; i++)
	{
		printf("���� ���� �Է�\n");
		printf("����:");
		scanf("%s", arr[i]->author);
		printf("����:");
		scanf("%s", arr[i]->title);
		printf("������ ��:");
		scanf("%d", &arr[i]->page);
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		printf("���� ���� ���\n");
		printf("����:%s\n", arr[i]->author);

		printf("����:%s\n", arr[i]->title);

		printf("������ ��:%d\n", arr[i]->page);

	}
	for (i = 0; i < 3; i++)
	{
		free(arr[i]);
	}
	
	return 0;

}