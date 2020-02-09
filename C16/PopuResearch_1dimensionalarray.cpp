#include <stdio.h>
int enter_popu(int* e_popu, int floor)
{
	int i;
	for (i = 0; i < 2; i++)
	{
		printf("%d類 %d�� 殮溘\n", floor, i + 1);
		scanf("%d", &e_popu[i]);
		
	}	
	return e_popu[0] + e_popu[1];
}
int main(void)
{
	int villa_1f[2] = {0,0};
	int villa_2f[2] = {0,0};
	int villa_3f[2] = {0,0};
	int villa_4f[2] = {0,0};
	
	int popu_1fsum = 0;
	int popu_2fsum = 0;
	int popu_3fsum = 0;
	int popu_4fsum = 0;

	popu_1fsum = enter_popu(villa_1f, 1);
	popu_2fsum = enter_popu(villa_1f, 2);
	popu_3fsum = enter_popu(villa_1f, 3);
	popu_4fsum = enter_popu(villa_1f, 4);

	printf("%d類 檣掘熱 = %d\n", 1, popu_1fsum);
	printf("%d類 檣掘熱 = %d\n", 2, popu_2fsum);
	printf("%d類 檣掘熱 = %d\n", 3, popu_3fsum);
	printf("%d類 檣掘熱 = %d\n", 4, popu_4fsum);

	return 0;
}