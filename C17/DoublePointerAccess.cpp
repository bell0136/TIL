#include <stdio.h>
int main(void)
{
	double num = 3.14;
	double* ptr = &num;
	double** dptr = &ptr;
	double* ptr2;

	printf("%9p %9p\n", ptr, *dptr);//*dptr�� ptr�� �ּ� (9p ���ڼ��� �޶� ���̴ٸ����� ���� ������ �ڷ� ����?)
	printf("%9g %9g\n", num, **dptr); //dptr�� num�� �� ( *dptr, �� dptr ptr�� ����Ű�� ���� �����ϰڴ� ��, num�� ��)
	ptr2 = ptr;//(=ptr2 = *dptr;)�� ���� �ǹ�
	//ptr2 = &ptr �ȵ� (�ƿ� ���� �ȵǴ�..)
	*ptr2 = 10.99;
	printf("%9g %9g\n", num, **dptr);

	return 0;
}