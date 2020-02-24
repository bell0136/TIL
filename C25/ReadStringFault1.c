#include <stdio.h>
char* printname()
{
	static char name[20]; //함수 빠져나가면 소멸

	gets(name);
	return name;
}
int main()
{
	printf("%s", printname());
	return 0;
}