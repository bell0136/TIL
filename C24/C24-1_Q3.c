#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main()
{
	FILE* last = fopen("C:\\Users\\HE\\source\\repos\\C24-1_Q1\\C24-1_Q1\\mystory.txt", "rt");
	char story[40];

	if (last == NULL)
	{
		puts("파일오픈오류");
		return -1;
	}
	fgets(story, sizeof(story), last);
	printf("%s", story);
	
	fgets(story, sizeof(story), last);
	printf("%s", story);
	
	fgets(story, sizeof(story), last);
	printf("%s", story);
	
	fgets(story, sizeof(story), last);
	printf("%s", story);
	
	fgets(story, sizeof(story), last);
	printf("%s", story);
	

	fclose(last);
	return 0;
}