#include <stdio.h>
int main(void)
{
	int* arr1[5];
	int* arr2[3][5];

	int** ptr = arr1; //배열의 이름+포인터 = 더블포인터
	int* (*ptr2)[5] = arr2; //더블 포인터의 2차원 배열
}