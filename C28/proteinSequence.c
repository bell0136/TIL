#include <stdio.h>
#include <string.h>
void delete_input_buf(void)
{
	while (getchar() != '\n');
}
int main()
{
	char seq_name[100];	
	char sequence[100];

	FILE* protein_seq = fopen("sequence.txt", "rt");
	if (protein_seq == NULL)
	{
		puts("���Ͽ��¿���");
	}
	while (1)
	{
		puts("�̸��� �Է��Ͻÿ�");
		scanf("%s", seq_name);
		delete_input_buf();
		fscanf(protein_seq, "%s", seq_name);
		if (seq_name[0] == '>')//�ƽ�Ű�ڵ� 62
		{
			while (1)
			{
				fscanf(protein_seq, "%s", sequence);
				if (sequence[0] == '>')
				{
					break;
				}
				printf("%s", sequence);				
			}
		}
		if (feof(protein_seq) != 0)
		{
			break;
		}
	}
	
	return 0;
}