#include <stdio.h>
int main(void)
{
	int arr[3] = { 1,2,3 };
	int* ptr1 = arr;//���̴� ���� ���� ������ �˾Ƶ��� 
	//int* ptr1 = &arr[0];�� �ȴ�.	

	printf("%p\n\n", &ptr1[0]);

	int num1 = 10;
	int num2 = 20;
	int num3 = 40;
	int* arr1[3] = { &num1,&num2,&num3 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(&arr[0]));
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(&arr1)); //&�����ڸ� ���� ���� �ʿ�� ������ �Ǳ� �ȴ�.
	printf("%d\n\n", sizeof(&arr1[2]));

	printf("%p\n", &arr1[0]);
	printf("%p\n", &arr[1]);
	printf("%p\n\n", &arr1[2]);
	//�����͹迭�̶�� �ؼ� �ּҵ� 4�� �������� ���� ���� ����.

	double num = 1.1;
	double* ptr = &num;

	printf("%d\n", sizeof(ptr)); //������ ����(==num�� �ּҰ�)�� 4����Ʈ
	printf("%d\n", sizeof(&ptr)); //num �ּҰ��� ũ��� 4����Ʈ (32bit ü��)
	printf("%d\n", sizeof(*ptr)); //num type(==double)�� ũ�� 

	return 0;
}