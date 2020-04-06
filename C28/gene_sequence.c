#include <stdio.h>
#include <string.h>
void delete_input_buf(void)
{
	while (getchar() != '\n');
}
int read_arr(FILE* protein_seq, char* arr, int to_message)
{
	int index = 0;

	while (1)
	{
		arr[index] = fgetc(protein_seq);
		
		if (arr[index] == to_message)
		{
			arr[index] == NULL;
			break;
		}
		index++;
	}
	return index;
}
void reverse_seq(FILE* protein_seq, char* sequence) //상보서열
{
	int i = 0;
	while (sequence[i] != NULL)
	{
		sequence[i] = fgetc;
		if (sequence[i] == 'A')
		{
			sequence[i] = 'T';
		}
		if (sequence[i] == 'T')
		{
			sequence[i] = 'A';
		}
		if (sequence[i] == 'G')
		{
			sequence[i] = 'C';
		}
		if (sequence[i] == 'C')
		{
			sequence[i] = 'G';
		}
		i++;
	}

}
int main(void)
{
	FILE* protein_seq = fopen("sequence.txt", "rt");
	if (protein_seq == NULL)
	{
		puts("파일오픈오류");
	}
	while (1)
	{
		int num = 0;
		int i = 0;
		int idx1 = 0;
		int idx2 = 0;
		int check_se = 0;
		char seq_str[20];
		char* point[4];
		int index = 0;
		int check = 0;
		int start = 0;
		int end = 0;
		puts("1.sequence 2.exit");
		scanf("%d", &num);
		delete_input_buf();

		if (num == 1)
		{
			puts("locus_id : start : end : strand(+)(-) 순으로 입력해주세요.");
			scanf("%s", seq_str);
			delete_input_buf();

			char* ptr = strtok(seq_str, ":");
			while (ptr != NULL)
			{
				printf("%s\n", ptr);
				point[i] = ptr;
				ptr = strtok(NULL, ":");
				i++;
			}

			if (strcmp(point[1], point[2]) > 0) //start가 end보다 큼
			{
				check_se = 1;
			}

			if (check_se == 1)
			{
				puts("start, end 범위를 다시 적어주세요");
			}

			while (1)
			{
				char seq_id[200] = { 0 };
				int i = 0;
				index = 0;
				int seq_count = 0;
				int idx3 = 0;
				int ch = 0;

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
							if (!strcmp(seq_id, point[0]))
							{
								printf("same string\n");
								char seq_info[100] = { 0 };
								read_arr(protein_seq, seq_info, '\n');
								printf("%s", seq_info);
								printf("\n");
								char sequence[1000] = { 0 };
								seq_count = read_arr(protein_seq, sequence, '>');
								printf("seq_count = %d\n", seq_count);
								start = atoi(point[1]);
								end = atoi(point[2]);
							
								if (*point[3] == 43)
								{
									fseek(protein_seq, -seq_count - 3, SEEK_CUR);
									for (idx3 = start; idx3 < end; idx3++)
									{
										ch = fgetc(protein_seq);
										printf("%c", ch);
									}
								}
								if (*point[3] == 45)
								{
									reverse_seq(protein_seq, sequence);
									fseek(protein_seq, -seq_count - 3, SEEK_CUR);
									for (idx3 = start; idx3 < end; idx3++)
									{
										ch = fgetc(protein_seq);
										printf("%c", ch);
									}
								}
															
								check = 1;
								break;
							}
							else if (strcmp(seq_id, point[0]))
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
			puts("다시 입력하세요.");
		}

	}
	return 0;
}