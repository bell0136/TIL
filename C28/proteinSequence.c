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
	char search_name[110] = { 0 }; //�˻��� �̸�
	puts("�̸��� �Է��Ͻÿ�");
	fgets(search_name, 109, stdin); //���Ϸκ��� ���ڿ��� �о���δ�.
	delete_input_buf();

	while (1)
	{
		char seq_name[200] = { 0 };
		int i = 0;
		
		seq_name[i] = fgetc(protein_seq);
		//fscanf(protein_seq, "%s", sequence);
		if (seq_name[i] == '>')
		{
			printf("here\n");
			index = 0;
			while (1)
			{
				
				seq_name[index] = fgetc(protein_seq);
				//printf("%c", seq_name[index]);
				if (seq_name[index] == '\n')
				{
					seq_name[index] = NULL;
					if (!strcmp(seq_name, search_name))
					{
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
					else if(strcmp(seq_name,search_name))
					{
						printf("break!\n");
						break;
					}
					else if (feof(protein_seq) != 0)
					{
						puts("NOT FOUND");
					}

				}
				index++;
			}
			i++;
		}
		else
		{
			continue;
		}
		/*}�̸��� �����ϴ� ����

	
		fseek(protein_seq, 0, SEEK_SET);
		if (feof(protein_seq) != 0)
		{
			break;
		}*/
	}
	return 0;
}