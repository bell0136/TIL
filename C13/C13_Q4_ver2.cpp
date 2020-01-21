#include <stdio.h>
int main(void)
{
	int arr[6] = { 1,2,3,4,5,6 };
	int* front_ptr = &arr[0];
	int* behind_ptr = &arr[5];
	int temp; //자리바꾸기
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		temp = *front_ptr;
		*front_ptr = *behind_ptr;
		*behind_ptr = temp;
		front_ptr++;
		behind_ptr--;		
	}
	for (i = 0; i < 6; i++)
	{
		printf("%d", arr[i]);
	}
}