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
		//������ k==side_length-2���� �� cycle�� �ѹ��� �ö󰡹Ƿ�(����,����,����,����) �ٵ� side_length -2�ϸ� 3,2�� ����� �ȵż� -1�� ����/ 2,3�� ������ ���������ڿ����� �Ҹ��� �ڵ�..  
		{
			break;
		}
		size = side_length - k;
		for (count_garo = k; count_garo < size; count_garo++) //���� --> ,ó���� �Ѻ��� ���� ��ŭ
		{
			arr[k][count_garo] = num;
			num++;
		}
		for (count_sero = k + 1; count_sero < size; count_sero++) //���ι����� count_sero Ƚ�� �ѹ� �پ�� (k+1,������ �ٸ���)
		{
			arr[count_sero][size - 1] = num;
			num++;
		}
		for (count_garo = size - 1; count_garo > k; count_garo--) //���� <-- Ƚ�� �״�� count_garo�پ�� �ε����� �ѹ� �پ��ϱ� [count_garo-1]�ϱ�
		{
			arr[size - 1][count_garo - 1] = num;
			num++;
		}
		for (count_sero = size - 2; count_sero > k; count_sero--) //�������� count_sero Ƚ�� �ѹ� �پ��
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
	int side_length = 0; //�Ѻ��� ����
	printf("���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &side_length);
	snail(side_length);
}