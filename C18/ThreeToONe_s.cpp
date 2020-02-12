#include <stdio.h>
int* ThreeToOne(int* depth, int* order, int(*arr_3d)[3][4])
{
	static int arr_1d[24] = { 0 }; //��ȯ�� �迭�� ��� static������

	int num = 0; //1�����迭�� �ű涧�� index

	int i = 0;
	int j = 0;
	int k = 0;

	int seat = 0;

	int index_k = 0;
	int index_j = 0;
	int index_i = 0;

	int a = 0;
	int b = 0;
	int c = 0;

	int* ptr[3] = { &k,&j,&i };
	int* change[3] = { &a,&b,&c }; //�ڸ��� �ٲ� �� ���� �����Ƿ� �迭 �ϳ� �� ����

	for (seat = 0; seat < 3; seat++)
	{
		if (order[seat] == 0)
		{
			*change[seat] = *ptr[0];//k�� �ּҰ� �ֱ�
			index_k = seat;
		}
		else if (order[seat] == 1)
		{
			*change[seat] = *ptr[1];//j�� �ּҰ� �ֱ�
			index_j = seat;
		}
		else if (order[seat] == 2)
		{
			*change[seat] = *ptr[2];//i�� �ּҰ� �ֱ�
			index_i = seat;
		}
	}

	for (*change[2] = 0; *change[2] < depth[order[2]]; (*change[2])++)
	{
		for (*change[1] = 0; *change[1] < depth[order[1]]; (*change[1])++)
		{
			for (*change[0] = 0; *change[0] < depth[order[0]]; (*change[0])++)
			{
				arr_1d[num] = arr_3d[*change[index_k]][*change[index_j]][*change[index_i]];
				num++;
			}
		}
	}
	return arr_1d;
}
int main(void)
{
	int mf_order[3] = { 0,1,2 };

	int i = 0; //�迭 �ε���

	int arr_3d[2][3][4] =
	{
		{
			{1,2,3,4},
			{5,6,7,8},
			{9,10,11,12}
		},
		{
			{13,14,15,16},
			{17,18,19,20},
			{21,22,23,24}
		}
	};

	int mf_depth[3] = { 2,3,4 };
	int* ptr = ThreeToOne(mf_depth, mf_order, arr_3d);

	for (i = 0; i < 24; i++)
	{
		printf("%d ", ptr[i]);
	}
}