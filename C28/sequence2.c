#include <stdio.h>
#include <string.h>
void delete_input_buf(void)
{
	while (getchar() != '\n');
}
int main()
{
	FILE* protein_seq = fopen("sequence.txt", "rt");
	if (protein_seq == NULL)
	{
		puts("���Ͽ��¿���");
	}
	while (1)
	{
		char seq_name[100] = {0};
		char sequence[100] = {0};
		char search_name[100] = { 0 };
		int i = 0;

		puts("�̸��� �Է��Ͻÿ�");
		scanf("%s", search_name);
		delete_input_buf();
		//fscanf(protein_seq, "%s", seq_name);		
		while (1)
		{
			printf("read Start!\n");
			seq_name[i] = fgetc(protein_seq);
			//fscanf(protein_seq, "%s", sequence);
			if (seq_name[i] == '>')
			{
				printf("here\n");
				i = 0;//ó������ ��� ���ؼ�
				while (1)
				{						
					seq_name[i] = fgetc(protein_seq);
					printf("%c", seq_name[i]);
					if (seq_name[i] == '\n')
					{
						seq_name[i] = NULL;
						break;
					}
					i++;
				}
				break;
			}					
		}//�̸��� �����ϴ� ����
		printf("%s", sequence);
		if (!strcmp(seq_name, search_name))
		{
			fscanf(protein_seq, "%s", sequence);
			printf("%s", sequence);
			if (sequence[0] == '>')
			{
				break;
			}
		}//������ �б�
		fseek(sequence, 0, SEEK_SET);
		if (feof(protein_seq) != 0)
		{
			break;
		}
	}

	return 0;
}