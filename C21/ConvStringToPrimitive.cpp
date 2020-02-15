#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[30];
	printf("정수입력하시오\n");
	scanf("%s", str);
	printf("%d\n", atoi(str));

	printf("실수입력하시오(6자리)\n"); //double
	scanf("%s", str);
	printf("%g\n", atof(str)); //%f는 float, double형 출력 서식문자

	printf("정수입력하시오\n"); //long이므로 엄청 큰 값
	scanf("%s", str);
	printf("%l\n", atol(str));
	
	return 0;
}