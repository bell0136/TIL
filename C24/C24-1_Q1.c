#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main()
{
	FILE* story = fopen("mystory.txt","wt");
	char name[15] = {"#�̸� : ������"};
	char id[31]={ "#�ֹε�Ϲ�ȣ : 990507-3423422" };
	char phone[30]={ "#��ȭ��ȣ : 010-2942-4356" };

	if (story == NULL)
	{
		puts("���Ͽ��¿���");
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