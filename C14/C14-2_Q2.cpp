#include <stdio.h>
void ShowData(int* ptr) //int * ptr앞에 const를 붙이면 ptr의 주소값을 바꿀 수 없는데 아래와같이 rptr을 ptr을 가르키도록 해버리면 rptr을 통해서 ptr에 저장된 주소값을 바꿀 수 있다.
{
	int* rptr = ptr;
	printf("%d\n", *rptr);
	*rptr = 20;//rptr을 가리키는 값 = ptr의 주소값
}
int main(void)
{
	int num = 10;
	int* ptr = &num;
	ShowData(ptr);
	return 0;
}