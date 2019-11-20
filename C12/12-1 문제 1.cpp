#include <stdio.h>
int main(void)
{
	int num = 10;
	int * ptr1 = &num;
	//num의 주소값을 ptr1이름의 변수로 저장하겠다.
	int * ptr2 = ptr1;
	//ptr1 주소를 ptr2포인터에 대입

	(*ptr1)++; // ptr1에 저장되어있는 num을 더하자
	(*ptr2)++; // ptr2에 저장되어있는 ptr1을 더하자 (=num에 +1,+1)
	printf("%d\n", num);//num은 12임

	/*
	 num - ptr1(주소값) -ptr2(주소값) - 처음 생각

	 ptr1과 ptr2가 가리키는 변수가 같아짐
	 ptr1 - num
	 ptr2 - num
	*/
	return 0;
}