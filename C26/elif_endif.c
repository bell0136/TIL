#include <stdio.h>
#define num 7
int main()
{
#if num == 6
	puts("���� ���ڴ� 6�Դϴ�.");
#elif num  == 7
	puts("���� ���ڴ� 7�Դϴ�.");
#elif num  == 8
	puts("���� ���ڴ� 8�Դϴ�.");
#else
	puts("���� ���ڴ� 6,7,8 ��� �ƴմϴ�.");
#endif

	return 0;
}