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

	printf("[%p %p %p]\n", &pos.mem1, &pos.mem2, &pos.mem3); //�ּ� �ٸ�
	printf("[%p %p %p]\n\n", &upos.mem1, &upos.mem2, &upos.mem3); //�ּҰ� ����


	printf("%d\n", sizeof(pos)); //������ �ڷ��� �� ����ϰ� ����
	printf("%d\n", sizeof(upos)); //����ū ���� �����
}