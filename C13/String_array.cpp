#include <stdio.h>
int main(void)
{
	int i = 0;
	const char* str[3] = { "spring","summer","fall" };

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}
	return 0;
}