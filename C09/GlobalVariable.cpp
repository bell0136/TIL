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
//������������ ������ �� �� �����̸��� �������� ����������!. 
