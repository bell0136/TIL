#include <stdio.h>
void MaxAndMin(int len, int * receiveArr, int** receiveMax, int** receiveMin)
{
	int i = 0;
	int temp;
	for (len; len > 1; len--)
	{
		for (i = 0; i < 4; i++)
		{
			if (receiveArr[i] < receiveArr[i + 1])
			{
				temp = receiveArr[i];
				receiveArr[i] = receiveArr[i + 1];
				receiveArr[i + 1] = temp;
			}
		}
	}
	*receiveMax = &receiveArr[4];
	*receiveMin = &receiveArr[0];

}
int main(void)
{
	int* maxPtr;
	int* minPtr;
	int arr[5] = { 0 };
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		printf("���� �Է��Ͻÿ�.\n");
		scanf("%d", &arr[i]); //5�� �Է�
	}

	printf("%p %p\n", &arr[4], &arr[0]); 

	MaxAndMin(sizeof(arr)/sizeof(int),arr, &maxPtr, &minPtr);

	printf("%p %p\n", maxPtr, minPtr);//&maxPtr &minPtr�� ���ϴ� ������ �Լ�ȣ�� ���� maxPtr�� minPtr�� ���� �̹� �ּҰ��� �����Ǿ��ִ�.
}