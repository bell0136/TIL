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
		printf("도서 정보 입력\n");
		printf("저자:");
		scanf("%s", arr[i]->author);
		printf("제목:");
		scanf("%s", arr[i]->title);
		printf("페이지 수:");
		scanf("%d", &arr[i]->page);
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		printf("도서 정보 출력\n");
		printf("저자:%s\n", arr[i]->author);

		printf("제목:%s\n", arr[i]->title);

		printf("페이지 수:%d\n", arr[i]->page);

	}
	for (i = 0; i < 3; i++)
	{
		free(arr[i]);
	}
	
	return 0;

}