#include <stdio.h>
int main(void)
{
	int arr2d[3][3];
	printf("%p \n", arr2d);
	printf("%p \n", arr2d[0]);
	printf("%p \n\n", &arr2d[0][0]);

	printf("%d \n", arr2d);
	printf("%d \n", arr2d[0]);
	printf("%d \n\n", &arr2d[0][0]); //주소인데 왜 %d를 썼지?

	printf("%p \n", arr2d[1]);
	printf("%p \n\n", &arr2d[1][0]);

	printf("%p \n", arr2d[2]);
	printf("%p \n\n", &arr2d[2][0]);

	printf("sizeof(arr2d): %d\n", sizeof(arr2d)); //배열의 이름, 배열 전체 크기 반환
	printf("sizeof(arr2d[0]): %d\n", sizeof(arr2d[0]));
	printf("sizeof(arr2d[1]): %d\n", sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]): %d\n", sizeof(arr2d[2]));
	return 0;
}