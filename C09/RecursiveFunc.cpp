#include <Stdio.h>
int call(int a)
{
	if(a<=0)
	{
		return 0;
	}
	printf("call\n");
	return call(a-1);

}
int main (void)
{
	call(3);
	return 0;
}
