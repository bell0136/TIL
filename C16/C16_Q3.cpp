#include <stdio.h>
int main(void)
{
	int score[5][5] = { 0 };
	int name = 0;
	int subject = 0;
	int n_total = 0;
	int s_total = 0;

	for (name = 0; name < 4; name++)
	{
		for (subject = 0; subject < 4; subject++)
		{
			printf("%d의 %d과목의 점수\n", name + 1, subject + 1);
			scanf("%d", &score[name][subject]);
		}
		
	}

	for (name = 0; name < 4; name++)
	{
		score[4][subject] = 0;
		for (subject = 0; subject < 4; subject++)
		{			
			score[4][subject] += score[name][subject];
		}		
	}

	for (subject = 0; subject < 4; subject++)
	{
		score[name][4] = 0;
		for (name = 0; name < 5; name++)
		{		
			score[name][4] += score[name][subject];		
		}
	}

	for (name = 0; name < 5; name++)
	{
		for (subject = 0; subject < 5; subject++)
		{
			printf("%d ", score[name][subject]);
		}
		printf("\n");
	}
}
