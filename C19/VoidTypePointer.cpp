#include <stdio.h>
void SoSimpleFunc(void)
{
	printf("I'm so simple");
}
int main(void)
{
	int num = 20;
	void* ptr;

	ptr = &num;
	printf("%p\n",ptr);

	ptr = SoSimpleFunc;
	//ptr = SoSimpleFunc(); 왜 안되는가..
	printf("%p \n", ptr);

	return 0;
}