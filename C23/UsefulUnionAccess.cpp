#include <stdio.h>
struct dbshort
{
	unsigned short upper;
	unsigned short lower;
};
union rdbuf
{
	int ibuf;
	char bbuf[4];
	struct dbshort sbuf;
};

int main()
{
	union rdbuf buf;
	printf("ют╥б\n");
	scanf("%d", &(buf.ibuf));
	printf("%d\n",buf.sbuf.upper);
	printf("%d\n", buf.sbuf.lower);
	printf("%c\n",buf.bbuf[0]);
	printf("%c\n", buf.bbuf[3]);
}