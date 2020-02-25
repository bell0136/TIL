#include <stdio.h>
#define string_job(A,B)	#A"의 직업은 "#B"입니다."
int main()
{
	printf("%s\n", string_job(이동춘, 나무꾼));
	printf("%s\n", string_job(인어공주, 인어));

}