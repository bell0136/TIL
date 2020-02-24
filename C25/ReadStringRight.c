#include <stdio.h>
#include <stdlib.h>
char** printname()
{
	char *name = (char*)malloc(sizeof(char) * 20);
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

	free(name1);//첫번째 함수호출후 힙 영역에서 name변수 들어가고 name1으로 반환
	free(name2);//두번재 함수호출 후 힙영역에서 name변수 들어가고 name2로 반환
	
	return 0;
}