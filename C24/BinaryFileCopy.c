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
		puts("���� ���� ����");
		return -1;
	}

	
	while (1)
	{
		read = fread((void*)buf, 1, sizeof(buf), src);
		if(read < sizeof(buf)) 
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
	fclose(src);
	fclose(des);
	return 0;
}