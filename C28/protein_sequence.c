#include <stdio.h>
#include <string.h>
void delete_input_buf(void)
{
	while (getchar() != '\n');
}
void read_arr(FILE * protein_seq, char * arr, int to_message)
{
	int index = 0;
	
	while (1)
	{		
		arr[index] = fgetc(protein_seq);
		printf("%c", arr[index]);
		if (arr[index] == to_message)
		{
			arr[index] == NULL;
			break;
		}		
		index++;
	}
}
int main()
{
	FILE* protein_seq = fopen("sequence.txt", "rt");
	if (protein_seq == NULL)
	{
		puts("���Ͽ��¿���");
	}
	/*while (1)
	{*/
	int index = 0;
	char search_id[20] = { 0 }; //�˻��� �̸�
	puts("�̸��� �Է��Ͻÿ�");
	scanf("%s", search_id); //���Ϸκ��� ���ڿ��� �о���δ�.
	delete_input_buf();

	while (1)
	{
		char seq_id[200] = { 0 };
		int i = 0;
		index = 0;		
		seq_id[i] = fgetc(protein_seq);
		//fscanf(protein_seq, "%s", sequence);
		if (seq_id[i] == '>')
		{		
			while (1)
			{
				seq_id[index] = fgetc(protein_seq);
				if (seq_id[index] == 32)//�����̽���
				{					
					seq_id[index] = NULL;
					printf("seq : %s\n", seq_id);
					printf("search : %s\n", search_id);
					if (!strcmp(seq_id, search_id))
					{
						printf("same string\n");
						char seq_info[100] = { 0 };
						read_arr(protein_seq, seq_info, '\n');
						printf("\n");
						char sequence[1000] = { 0 };
						read_arr(protein_seq, sequence, '*');
						return 0;
					}
					else if (strcmp(seq_id, search_id))
					{
						/*if (feof(protein_seq) != 0)
						{
							puts("NOT FOUND");
						}*/
						printf("break\n");
						break;
					}
				}
				index++;				
			}
			i++;
		}
		/*else
		{
			continue;
		}*/
		/*fseek(protein_seq, 0, SEEK_SET);
		if (feof(protein_seq) != 0)
		{
			break;
		}*/
	}
	fclose(protein_seq);
	return 0;
}