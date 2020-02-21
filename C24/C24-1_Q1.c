#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main()
{
	FILE* story = fopen("mystory.txt","wt");
	char name[15] = {"#이름 : 김희은"};
	char id[31]={ "#주민등록번호 : 990507-3423422" };
	char phone[30]={ "#전화번호 : 010-2942-4356" };

	if (story == NULL)
	{
		puts("파일오픈오류");
		return -1;
	}

	fputs(name, story);
	fputc('\n', story);
	fputs(id, story);
	fputc('\n', story);
	fputs(phone, story);
	fputc('\n', story);

	fclose(story);
	return 0;

}