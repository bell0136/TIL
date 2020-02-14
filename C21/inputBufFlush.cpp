#include <stdio.h>
void ClearLineFromReadBuffer()
{
	while (getchar() != '\n');
}
int main()
{
	char id[7];
	char name[10];

	fputs("주민번호입력: ", stdout);
	fgets(id, sizeof(id), stdin);
	ClearLineFromReadBuffer();

	fputs("이름입력: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민번호: %s\n", id);
	printf("이름: %s\n", name);
	return 0;
}