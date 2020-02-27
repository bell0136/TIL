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
		printf("도서 정보 입력\n");
		printf("저자:");
		scanf("%s", arr[i].auther);
		printf("제목:");
		scanf("%s", arr[i].bookname);
		printf("페이지 수:");
		scanf("%d", &arr[i].page);
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		printf("도서 정보 출력\n");
		printf("저자:%s\n", arr[i].auther);
		
		printf("제목:%s\n", arr[i].bookname);
		
		printf("페이지 수:%d\n", arr[i].page);
		
	}
	return 0;
}