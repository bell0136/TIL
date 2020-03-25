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
		puts("파일오픈오류");
	}
	while (1)
	{
		puts("이름을 입력하시오");
		scanf("%s", seq_name);
		delete_input_buf();
		fscanf(protein_seq, "%s", seq_name);
		if (seq_name[0] == '>')//아스키코드 62
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