#include<stdio.h>
void snail(int side_length, int turn)
{
	int num = 1;
	int count_garo = 0;
	int count_sero = 0;	

	static int arr[50][50] = { 0 };

	int k = 0;
	int idx_sero = 0;
	int idx_garo = 0;

	while (k < side_length-2)
	{		
		for (count_garo = k; count_garo < side_length-k; count_garo++) //가로 -->
		{			
			arr[k][count_garo] = num;
			num++;
		}		
		for (count_sero = k+1; count_sero < side_length-k; count_sero++) //세로밑으로
		{			
			arr[count_sero][(side_length-k)-1] = num;
			num++;
		}	
		for (count_garo = (side_length-k)-2; count_garo >= k; count_garo--) //가로 <--
		{			
			arr[(side_length-k)-1][count_garo] = num;
			num++;
		}		
		for (count_sero = (side_length-k)-2; count_sero > k; count_sero--) //세로위로
		{			
			arr[count_sero][k] = num;
			num++;
		}		
		k++;
	}

	printf("\n");
	for (idx_sero = 0; idx_sero < side_length; idx_sero++)
	{
		for (idx_garo = 0; idx_garo < side_length; idx_garo++)
		{
			printf("%2d ", arr[idx_sero][idx_garo]);
		}
		printf("\n");
	}
}

int main(void)
{
	int side_length = 0; //한변의 길이
	printf("숫자를 입력하시오:");
	scanf("%d", &side_length);
	int turn_result = 2 * side_length - 1; //도는 횟수
	snail(side_length, turn_result);
}