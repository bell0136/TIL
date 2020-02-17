#include<stdio.h>
void snail(int side_length)
{
	int num = 1;
	int count_garo = 0;
	int count_sero = 0;
	static int arr[50][50] = { 0 };
	int k = 0;
	int idx_sero = 0;
	int idx_garo = 0;
	int size = 0;

	while (1)
	{
		if (k == side_length-1) 
		//원래는 k==side_length-2였다 두 cycle에 한번씩 올라가므로(가로,세로,가로,세로) 근데 side_length -2하면 3,2가 출력이 안돼서 -1로 수정/ 2,3을 제외한 나머지숫자에서는 불리한 코드..  
		{
			break;
		}
		size = side_length - k;
		for (count_garo = k; count_garo < size; count_garo++) //가로 --> ,처음에 한변의 길이 만큼
		{
			arr[k][count_garo] = num;
			num++;
		}
		for (count_sero = k + 1; count_sero < size; count_sero++) //세로밑으로 count_sero 횟수 한번 줄어듦 (k+1,범위는 다르게)
		{
			arr[count_sero][size - 1] = num;
			num++;
		}
		for (count_garo = size - 1; count_garo > k; count_garo--) //가로 <-- 횟수 그대로 count_garo줄어듦 인덱스도 한번 줄어드니까 [count_garo-1]하기
		{
			arr[size - 1][count_garo - 1] = num;
			num++;
		}
		for (count_sero = size - 2; count_sero > k; count_sero--) //세로위로 count_sero 횟수 한번 줄어듦
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
	snail(side_length);
}