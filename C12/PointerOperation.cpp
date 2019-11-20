#include <stdio.h>
int main(void)
{
	/*int num1 = 100;
	int num2 = 200;
	int* pnum;//포인터변수 pnum선언
	pnum = &num1; //num1의 주소값 반환
	printf("%p\n", pnum);

	(*pnum) += 30; // pnum이 num1의 
	pnum = &num2; //num2의 주소값 반환
	printf("%p\n", pnum);
	(*pnum) -= 30;
	printf("num1:%d, num2:%d\n", num1, num2);
	return 0;
	//포인터 출력 %p
	//*pnum은 pnum이 가리키는 변수
	//pnum=&num1 포인터pnum이 num1을 가리킴*/

	//self

	int num1 = 100;
	int num2 = 100;
	int *pnum;//포인터변수선언

	pnum = &num1;
	*pnum += 30;//*pnum은 num1의 값을 가리키니까 130이다
	printf("%p\n", pnum);
	//printf("%d\n", pnum);
	printf("%d\n", *pnum);
	//printf("%p\n", *pnum);

	//*pnum은 num을 가리키므로 %d사용, pnum은 num의 주소를 가리키므로 %p사용

	return 0;
}