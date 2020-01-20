#include <stdio.h>
int main(void)
{
	const char* strarr[3] = { "simple","string","array" };
	printf("%p\n%p\n%p", &strarr[0], &strarr[1], &strarr[2]);
	return 0;
}

