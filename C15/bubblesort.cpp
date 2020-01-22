#include <stdio.h>
void bubblesort(int check, int * arr, int bubble_len)
{
	int bubble_size = 0; 
	int temp;
	int bubble_element = 0; //bubble요소
	for (bubble_size = 0; bubble_size < bubble_len - 1; bubble_size++)
	{		
		for (bubble_element = 0 ; bubble_element < bubble_len - 1 - bubble_size; bubble_element++)
		{
			if (check == 1 && arr[bubble_element] > arr[bubble_element + 1])//오름차순
			{
				temp = arr[bubble_element];
				arr[bubble_element] = arr[bubble_element + 1];
				arr[bubble_element + 1] = temp;				
			}
			else if (check == 0 && arr[bubble_element] < arr[bubble_element + 1])
			{
				temp = arr[bubble_element];
				arr[bubble_element] = arr[bubble_element + 1];
				arr[bubble_element + 1] = temp;				
			}
		}
	}
}

void b_printing(int* p_arr, int p_len)
{
	int i = 0; 
	for (i = 0; i < p_len; i++)
	{
		printf("%d ", p_arr[i]);
	}
}

int main(void)
{
	printf("값입력\n0:내림차순\n1:오름차순\n");
	int input;
	scanf("%d", &input);

	int i = 0;
	int bubble_arr[6] = {1, 3, 5, 6, 9, 12};
	int len = sizeof(bubble_arr) / sizeof(int);

	bubblesort(input, bubble_arr, len);
	b_printing(bubble_arr, len);
}