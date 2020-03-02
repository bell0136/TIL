#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	FILE* src = fopen("src.bin", "rb");
	FILE* des = fopen("des.bin", "wb");
	char buf[5] = {1,2,3,4,5};
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
		//다 못 읽거나, 파일의 끝에 도달했을 때
		{		
			if (feof(src) != 0)//파일의 끝에 도달
			{
				fwrite((void*)buf, 1, read, des);
				//읽은만큼 des파일에 쓴다.
				puts("파일복사성공");
				break;			
			}
			else // 에러 일 경우
			{
				puts("파일복사실패");
			}
		}
		fwrite((void*)buf, 1, sizeof(buf), des);//데이터가 꽉찰때		
	}
	fclose(src);
	fclose(des);
	return 0;
}