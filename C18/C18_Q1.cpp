#include <stdio.h>
int main(void)
{
	int* arr1[5];
	int* arr2[3][5];

	int** ptr = arr1; //�迭�� �̸�+������ = ����������
	int* (*ptr2)[5] = arr2; //���� �������� 2���� �迭
}