#include <stdio.h>
int main(void)
{
	int arr[3] = { 1,2,3 };
	int* ptr1 = arr;//쓰이는 경우는 거의 없지만 알아두자 
	//int* ptr1 = &arr[0];도 된다.	

	printf("%p\n\n", &ptr1[0]);

	int num1 = 10;
	int num2 = 20;
	int num3 = 40;
	int* arr1[3] = { &num1,&num2,&num3 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(&arr[0]));
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(&arr1)); //&연산자를 굳이 붙일 필요는 없지만 되긴 된다.
	printf("%d\n\n", sizeof(&arr1[2]));

	printf("%p\n", &arr1[0]);
	printf("%p\n", &arr[1]);
	printf("%p\n\n", &arr1[2]);
	//포인터배열이라고 해서 주소도 4씩 증가하지 않을 수도 있음.

	double num = 1.1;
	double* ptr = &num;

	printf("%d\n", sizeof(ptr)); //포인터 변수(==num의 주소값)도 4바이트
	printf("%d\n", sizeof(&ptr)); //num 주소값의 크기는 4바이트 (32bit 체제)
	printf("%d\n", sizeof(*ptr)); //num type(==double)의 크기 

	return 0;
}