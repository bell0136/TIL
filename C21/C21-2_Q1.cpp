#include <stdio.h>
int main(void)
{						
	int ch=0;
	int i = 0;
	int sum = 0;
	while (1)
	{
		ch = getchar();
		if (ch > 47 && ch < 58)
		{			
			sum += putchar(ch)-48;
		}

		if (ch == 10)
		{			
			break;
		}	
	}
	printf("\n�� ���� %d�Դϴ�.\n", sum);
	return 0;
}