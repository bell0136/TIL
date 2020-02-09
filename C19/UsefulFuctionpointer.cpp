#include <stdio.h>
int WhoIsFirst(int age1, int age2, int(*cmp)(int n1, int n2))
{
	return cmp(age1, age2);
}
int OlderFirst(int age1, int age2)
{
	if (age1 > age2)
	{
		return age1;
	}
	else if (age1 < age2)
	{
		return age2;
	}
	else 
	{
		return 0;
	}
}
int YoungerFirst(int age1, int age2)
{
	if (age1 < age2)
	{
		return age1;
	}
	else if (age1 > age2)
	{
		return age2;
	}
	else
	{
		return 0;
	}
}
int main(void)
{
	int age1 = 20;
	int age2 = 30;
	int first;

	first = WhoIsFirst(age1, age2, OlderFirst);
	printf("%d세와 %d세 중 나이가 많은 사람은 %d세 입니다.\n", age1, age2, first);

	first = WhoIsFirst(age1, age2, YoungerFirst);
	printf("%d세와 %d세 중 나이가 적은 사람은 %d세 입니다.\n", age1, age2, first);
	return 0;

}