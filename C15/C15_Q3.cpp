#include <stdio.h>
int main(void)
{
	int num_arr[10] = {}; //우선 배열
	int end_arr[10] = {};
	int num;
	int i = 0;
	int idx = 0;
	int odd_idx = 0; //홀수
	int even_idx = 0; //짝수

	printf("총 10개의 숫자 입력\n");

	for (i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf("%d", &num_arr[i]);
	}

	for (idx = 0; idx < 10; idx++)
	{
		if (num_arr[idx] % 2 == 1)
		{
			end_arr[odd_idx] = num_arr[idx];
			odd_idx++;
		}
		if (num_arr[idx] % 2 == 0)
		{
			end_arr[9 - even_idx] = num_arr[idx];
			even_idx++;
		}
	}

	printf("배열 요소의 출력: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", end_arr[i]);
	}
}