#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main(void)
{
	char str1[20]="spring12";
	char str2[20]="summer23";
	char str3[20]="autumn12";//sizeof시 널포함13
	char str4[20]="winter23";

	strcat(str1, str2); 
	puts(str1);//str2가 str1에 붙으므로 str1출력
	strncat(str3, str4, sizeof(str4)-1);//-1을 하면 null자리 안들어감
	puts(str3);

	return 0;
}
