#include <stdio.h>
struct spoint
{
	int mem1;
	int mem2;
	double mem3;
	
};
union upoint
{
	int mem1;
	int mem2;
	double mem3;
};
int main()
{
	struct spoint pos;
	union upoint upos;

	printf("[%p %p %p]\n", &pos.mem1, &pos.mem2, &pos.mem3); //주소 다름
	printf("[%p %p %p]\n\n", &upos.mem1, &upos.mem2, &upos.mem3); //주소가 같음


	printf("%d\n", sizeof(pos)); //각각의 자료형 다 계산하고 더함
	printf("%d\n", sizeof(upos)); //제일큰 값만 계산함
}