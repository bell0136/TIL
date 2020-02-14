#include <stdio.h>
#include <string.h>
void RemoveBSN(char * str)
{
	int length = strlen(str);
	str[length-1] = 0;
	//마지막 자리 \n 제외 시키고 싶어서
	//strlen호출 할 때 null문자는 길이에 포함x
}
int main()
{
	char str[100];
	printf("문자열입력\n");
	fgets(str,sizeof(str),stdin);
	printf("길이 %d\n 내용 %s\n", strlen(str), str);

	RemoveBSN(str);
	printf("길이 %d\n 내용 %s\n", strlen(str), str);
	return 0;

}