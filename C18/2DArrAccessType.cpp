#include <stdio.h>
int main(void)
{
	int a[3][2] =
	{
		{1,2},{3,4},{5,6}
	};

	printf("a[0] = %p\n", a[0]); //a[0]은 a[0][0]의 주소와 같음 
	printf("*(a+0) = %p\n", *(a + 0)); 
	printf("a[1] = %p\n", a[1]); //a[1]은 a[1][0]의 주소와 같음
	printf("*(a+1) = %p\n", *(a + 1)); 
	printf("a[2] = %p\n", a[2]); //a[2]은 a[2][0]의 주소와 같음
	printf("*(a+2) = %p\n\n", *(a + 2));

	printf("%p \n", a[0]); //a[0]이 가지고 있던 값은 바뀌지 않음.
	printf("%d %d\n", a[2][1], (*(a + 2))[1]);
	printf("%p \n", a[0]);
	printf("%d %d\n", a[2][1], (*(a[2]+1)));
	printf("%p \n", a[0]);
	printf("%d %d\n", a[2][1], (*(*(a + 2)+1)));
	

	return 0;
}