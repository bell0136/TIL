#include <stdio.h>
void ComplexFuncOne(int** ptr1, int* (*ptr2)[5])
{

}
void ComplexFuncTwo(int*** ptr3, int*** (*ptr4)[5])
{

}
int main(void)
{
	int* arr[3];
	int* arr2[3][5];
	int** arr3[5];
	int*** arr4[3][5];

	ComplexFuncOne(arr,arr2);
	ComplexFuncTwo(arr3, arr4);
}