#include <stdio.h>
void SwapIntPtr(int** dptr1,int** dptr2)
{
	int* temp;
	temp = *dptr1;
	*dptr1 = *dptr2;
	*dptr2 = temp;
	/*바꾸려고 하는 것 = num의 값 temp에 그냥 dptr1을 대입하면 ptr1의 주소값이 대입되는 거다. 
	ptr1이 가리키는 num의 주소값(!)을 넣으려면 *dptr1해야됨 
	**dptr1은 num의 값을 바꿀때*/
}
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;

	printf("%d %d\n", *ptr1, *ptr2);
	printf("%p %p\n", ptr1, ptr2);
	SwapIntPtr(&ptr1, &ptr2);
	printf("%d %d\n", *ptr1, *ptr2);
	printf("%p %p\n", ptr1, ptr2);
}