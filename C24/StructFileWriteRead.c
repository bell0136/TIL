#include <stdio.h>
#pragma warning (disable:4996)
struct friend
{
	char name[20];
	char sex;
	int age;
};
int main()
{
	struct friend mem1;
	struct friend mem2;
	int result = 0;

	FILE* fp = fopen("friend.bin", "wb");
	printf("이름, 성별, 나이");
	scanf("%s %c %d", (mem1.name), &(mem1.sex), &(mem1.age));
	fwrite((void*)&mem1, sizeof(mem1), 1, fp);
	fclose(fp);

	FILE * rp = fopen("friend.bin", "rb");
	fread((void*)&mem2, sizeof(mem2), 1, rp);
	printf("%s %c %d\n",mem2.name,mem2.sex,mem2.age);
	
	fclose(rp);
	return 0;
}