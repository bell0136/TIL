#include <stdio.h>
char name[20];
char* printname()
{
	gets(name);
	return name;
}
int main()
{
	printf("이름1입력\n");
	char* name1 = printname();
	printf("%s", name1);
	printf("\n");
	printf("이름2입력\n");
	char* name2 = printname();
	printf("%s", name2);
	printf("\n");
	printf("%s\n", name1);
	printf("%s\n", name2);

	//전역변수이기때문에 name2가 앞의 name1덮어씌움
	return 0;
}