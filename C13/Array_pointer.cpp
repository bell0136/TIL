#include <stdio.h>
int main(void)
{
	int num[3] = {10,20,30};
	int* ptr = &num;
	printf("%d ", ptr[0]);
	printf("%p ", &ptr[0]);

	//ptr변수에 배열을 저장하지 않아도 []쓸수 있다.
	//pointer = 주소값에 대한 정보 + 대상에 대한 정보
	
	return 0;
}