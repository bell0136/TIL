#include <stdio.h>
struct book
{
	char auther[20];
	char bookname[20];
	int page;
};
int main()
{
	struct book arr[3] = {0};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("���� ���� �Է�\n");
		printf("����:");
		scanf("%s", arr[i].auther);
		printf("����:");
		scanf("%s", arr[i].bookname);
		printf("������ ��:");
		scanf("%d", &arr[i].page);
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		printf("���� ���� ���\n");
		printf("����:%s\n", arr[i].auther);
		
		printf("����:%s\n", arr[i].bookname);
		
		printf("������ ��:%d\n", arr[i].page);
		
	}
	return 0;
}