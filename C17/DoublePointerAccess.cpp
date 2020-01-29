#include <stdio.h>
int main(void)
{
	double num = 3.14;
	double* ptr = &num;
	double** dptr = &ptr;
	double* ptr2;

	printf("%9p %9p\n", ptr, *dptr);//*dptr은 ptr의 주소 (9p 글자수가 달라서 끝이다르더라도 같게 맞춰줌 뒤로 정렬?)
	printf("%9g %9g\n", num, **dptr); //dptr은 num의 값 ( *dptr, 즉 dptr ptr이 가리키는 값을 참조하겠다 즉, num의 값)
	ptr2 = ptr;//(=ptr2 = *dptr;)과 같은 의미
	//ptr2 = &ptr 안됨 (아예 말이 안되는..)
	*ptr2 = 10.99;
	printf("%9g %9g\n", num, **dptr);

	return 0;
}