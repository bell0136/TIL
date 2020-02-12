#include <stdio.h>
void SimpleAdder(int n1, int n2)
{
	printf("%d + %d = %d\n", n1, n2, n1 + n2);
}
void ShowString(const char* str)
{
	printf("%s\n", str);
}
int main(void)
{
	const char* str = "my pointer";
	int num1 = 10;
	int num2 = 20;

	void (*fptr)(int, int) = SimpleAdder;
	void (*fptr2)(const char*) = ShowString;
	fptr(num1, num2);
	fptr2(str);

	printf("%p\n", fptr);
	printf("%p\n", fptr2);

	return 0;
}