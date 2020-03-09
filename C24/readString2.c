#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	char str[11];
	int i = 0;
	FILE* fp = fopen("abc.txt", "rt");
	/*fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);*/

	printf("\n");
	for (i = 0; i < 10; i++)
	{
		int ch = fgetc(fp);
		printf("%d\n", ch);
	}
	printf("\n");
	for (i = 0; i < 12; i++)
	{
		int ch = fgetc(fp);
		printf("%d\n", ch);
	}
}