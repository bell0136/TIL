#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	FILE* src = fopen("src.bin", "rb");
	FILE* des = fopen("des.bin", "wb");
	char buf[5] = { 1,2,3,4,5 };
	int read;

	if (src == NULL || des == NULL)
	{
		puts("���� ���� ����");
		return -1;
	}

	fputc('1', src);
	fputc('1', src);
	fputc('1', src);
	fputc('1', src);
	fputc('1', src);

	while (1)
	{
		read = fread((void*)buf, 1, sizeof(buf), src);

		
		if (read < sizeof(buf))
			//�� �� �аų�, ������ ���� �������� ��
		{
			if (feof(src) != 0)//������ ���� ����
			{
				fwrite((void*)buf, 1, read, des);
				//������ŭ des���Ͽ� ����.
				puts("���Ϻ��缺��");
				break;
			}
			else // ���� �� ���
			{
				puts("���Ϻ������");
			}
		}
		fwrite((void*)buf, 1, sizeof(buf), des);//�����Ͱ� ������		
	}
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		int ch = fgetc(src);
		printf("%d",ch);
	}

	fclose(src);
	fclose(des);
	return 0;
}