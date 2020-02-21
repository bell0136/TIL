#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	FILE* src = fopen("src.bin", "rt");
	FILE* des = fopen("des.bin", "wt");
	char buf[20];
	int read;

	if (src == NULL || des == NULL)
	{
		puts("파일 오픈 오류");
		return -1;
	}

	while (1)
	{
		read = fread((void*)buf, 1, sizeof(buf), src);
		if(read < sizeof(buf))
		{		
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, read, des);
				puts("파일복사성공");
				break;
				
			}
			else
			{
				puts("파일복사실패");

			}
		}
		fwrite((void*)buf, 1, sizeof(buf), des);
		
	}
	fclose(src);
	fclose(des);
	return 0;
}