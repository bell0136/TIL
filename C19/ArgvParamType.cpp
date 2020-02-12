#include <stdio.h>
void ShowAllString(int argc, const char* argv[])
{
	int i = 0;
	for (i = 0; i < argc; i++)
	{
		printf("%s \n", argv[i]);
	}
}
int main(void)
{
	const char* str[3] =
	{
		"C programming",
		"Java programming",
		"C++ programming"
	};

	ShowAllString(3, str);
	return 0;
}