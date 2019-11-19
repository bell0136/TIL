#include <Stdio.h>
int num;
void add (int i)
{
	num+=i;
}
int main (void)
{
	printf("%d\n",num);
	add(3);
	printf("num=%d",num);
	num++;
	printf("num=%d",num);
}
//지역변수에서 선언이 될 때 같은이름의 전역변수 가리워진다!. 
