#include <stdio.h>
#define num 6
int main()
{
#if num == 5
	puts("���ڴ� ���� 5�Դϴ�.");
#else 
	puts("���ڴ� ���� 5�� �ƴմϴ�.");
#endif

	return 0;
}