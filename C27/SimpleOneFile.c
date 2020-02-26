#include <stdio.h>
int num = 0;
void Increment(void)
{
	num++;
}
int Getnum(void)
{
	return num;
}
int main()
{
	printf("%d\n", num);
	Increment();
	printf("%d\n", Getnum());
	Increment();
	printf("%d\n", Getnum());

	return 0;

}