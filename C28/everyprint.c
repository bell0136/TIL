#include <stdio.h>
#include <string.h>
void delete_input_buf(void)
{
	while (getchar() != '\n');
}
void read_arr(FILE* protein_seq, char* arr, int to_message)
{
	int index = 0;

	while (1)
	{
		arr[index] = fgetc(protein_seq);
		//printf("%c", arr[index]);
		if (arr[index] == to_message)
		{
			arr[index] == NULL;
			
			break;
		}
		if (feof(protein_seq) != 0)
		{
			break;
		}
		printf("%c", arr[index]);
		index++;
	}
}
int main()
{
	FILE* protein_seq = fopen("sequence.txt", "rt");
	if (protein_seq == NULL)
	{
		puts("파일오픈오류");
	}
	while (1)
	{
		int index = 0;
		char search_id[20] = { 0 }; //검색할 이름
		int num = 0;
		int check = 0;
		puts("1. sequence 2. exit");
		scanf("%d", &num);
		delete_input_buf();
		if (num == 1)
		{
			puts("이름을 입력하시오");
			scanf("%s", search_id); //파일로부터 문자열을 읽어들인다.
			delete_input_buf();

			while (1)
			{
				char seq_id[200] = { 0 };
				int i = 0;
				index = 0;

				seq_id[i] = fgetc(protein_seq);
				if (seq_id[i] == '>')
				{
					while (1)
					{
						check = 0;
						seq_id[index] = fgetc(protein_seq);
						if (seq_id[index] == 32)//스페이스바
						{
							seq_id[index] = NULL;

							if (!strcmp(seq_id, search_id))
							{
								printf("same string\n");
								char seq_info[100] = { 0 };
								read_arr(protein_seq, seq_info, '\n');
								//printf("%s", seq_info);
								printf("\n");
								char sequence[1000] = { 0 };
								read_arr(protein_seq, sequence, '>');
								fseek(protein_seq, -2, SEEK_CUR);
								//printf("%s", sequence);
								check = 1;
								break;
							}
							else if (strcmp(seq_id, search_id))
							{
								break;
							}
						}
						index++;
					}
					if (check == 1)
					{
						break;
					}
					i++;
				}

				if (feof(protein_seq) != 0)
				{
					break;
				}
			}
			if (check == 0)
			{
				puts("NOT FOUND!");
			}

			fseek(protein_seq, 0, SEEK_SET);
			printf("\n");
		}
		else if (num == 2)
		{
			return 0;
		}
		else
		{
			puts("다시 입력하세요");
		}

	}
	fclose(protein_seq);
	return 0;
}