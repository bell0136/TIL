#include <stdio.h>
struct point
{
	int xpos;
	int ypos;
};
int main()
{
	struct point arr[4];
	int i = 0;

	for (i = 0; i < 4; i++)
	{
		fputs("xÁÂÇ¥, yÁÂÇ¥ Ãâ·Â",stdout);
		scanf("%d %d", &(arr[i].xpos), &(arr[i].ypos));
	}

	for (i = 0; i < 4; i++)
	{
		printf("[%d, %d] ", arr[i].xpos, arr[i].ypos);
	}
}