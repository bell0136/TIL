#include <Stdio.h>
int main(void)
{
	char str[] = "good moring";
	const char* ptr = str;
	printf("%c", *ptr);
}