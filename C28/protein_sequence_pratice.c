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

		seq_id[i] = fgetc(protein_seq);
		//fscanf(protein_seq, "%s", sequence);
		if (seq_id[i] == '>')
		{
			printf("here\n");
			index = 0;
			while (1)
			{				
				seq_id[index] = fgetc(protein_seq);
		
				if (seq_id[index] == 32)//�����̽���
				{				
					
					seq_id[index] = NULL;
					if (!strcmp(seq_id, search_id))
					{
						
						while (1)
						{
							char seq_info[100] = { 0 };
							fscanf(protein_seq, "%s", seq_info);
							
							if (seq_info[0] == 'M')
							{
								break;
							}
							
							
							printf("%s", seq_info);
						}
						printf("\n");
						while (1)
						{
							char sequence[200] = { 0 };
							fscanf(protein_seq, "%s", sequence);
							if (sequence[0] == '>')
							{
								return 0;
							}
							printf("%s", sequence);
						}
					}
					/*else if (strcmp(seq_id, search_id))
					{
						printf("break!\n");
						break;
					}
					else if (feof(protein_seq) != 0)
					{
						puts("NOT FOUND");
					}*/

				}
				index++;
			}
			i++;
		}
		else
		{
			continue;
		}
		//�̸��� �����ϴ� ����


		fseek(protein_seq, 0, SEEK_SET);
		if (feof(protein_seq) != 0)
		{
			break;
		}
	}
	return 0;
}