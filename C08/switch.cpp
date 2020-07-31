#include <stdio.h>

int main (void)
{
	int num=3;
	
	switch(num)
	{
		case 1:
		case 2:
		{
			printf("1 or 2\n");
			break;
		}
		case 3:
		{
			printf("3\n");
			break;
		}
		default:
		{
			printf("other\n");		
		}	
	}	
}


