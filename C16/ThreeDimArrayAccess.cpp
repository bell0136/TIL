#include <stdio.h>
int main(void)
{
	int classes = 0;
	int student = 0;
	int score = 0;
	int total = 0;
	double average = 0.0;
	int s_table[3][3][2] = 
	{
		{
			{70, 80},
			{94, 90},
			{70, 85}
		},
		{
			{83, 90},
			{95, 60},
			{90, 82}
		},
		{
			{98, 89},
			{99, 94},	
			{91, 87}
		} 
	};//반, 학생, 점수

	for (classes = 0; classes < 3; classes++)
	{
		average = 0;
		total = 0;
		for (student = 0; student < 3; student++)
		{		
			for (score = 0; score < 2; score++)
			{
				total += s_table[classes][student][score];
			}			
		}
		average = total / 6;
		printf("반%c의 평균 = %f\n",classes+65, average);
	}
}