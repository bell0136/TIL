#include <stdio.h>
extern void Increment();
extern int Getnum();

int main()
{
	//직접 num을 적으면 컴파일 안됨
	Increment();
	printf("%d\n", Getnum());
	Increment();
	printf("%d\n", Getnum());

	return 0;
}
