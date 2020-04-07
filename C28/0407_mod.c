#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void delete_input_buf(void)
{
	while (getchar() != '\n');
}
int read_arr(FILE* protein_seq, char* arr, int to_message, int count)
{
	int index = count;

	while (1)
	{
		arr[index + 1] = fgetc(protein_seq);

		if (arr[index + 1] == to_message)
		{
			arr[index + 1] = NULL;
			break;
		}

		if (feof(protein_seq) != 0)
		{
			break;
		}
		index++;
	}
	return index;
}
int reverse_seq(FILE* protein_seq, char* sequence, int to_message, int start, int end) //상보서열
{
	int i = 0;
	for (i = start; i <= end + 1; i++)
	{

		if (sequence[i] == 'A')
		{
			sequence[i] = 'T';
		}
		else if (sequence[i] == 'T')
		{
			sequence[i] = 'A';
		}
		else if (sequence[i] == 'G')
		{
			sequence[i] = 'C';
		}
		else if (sequence[i] == 'C')
		{
			sequence[i] = 'G';
		}

	}
	return i - 1;
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
		char seq_str[20];
		char* point[4];
		int index = 0;
		int check = 0;
		int start = 0;
		int end = 0;
		int check_start = 0;
		int check_end = 0;
		puts("1.sequence 2.exit");
		scanf("%d", &num);
		delete_input_buf();

		if (num == 1)
		{
			puts("locus_id : start : end : strand(+)(-) 순으로 입력해주세요.");
			gets(seq_str);

			char* ptr = strtok(seq_str, ":");
			while (ptr != NULL)
			{
				point[i] = ptr;
				ptr = strtok(NULL, ":");
				i++;
			}
			if (*point[0] == 32)
			{
				puts("check your ID");
			}
			if (*point[3] == 32)
			{
				*point[3] = 43;
			}
			if (*point[3] != 43 && *point[3] != 45)
			{
				puts("check your strand simbol");
			}
			/*if (strcmp(point[1], point[2]) > 0)
			{
				check_se = 1;
			}
			if (check_se == 1)
			{
				puts("start, end 범위를 다시 적어주세요");
			}*/
			while (1)
			{
				char seq_id[200] = { 0 };
				int i = 0;
				index = 0;
				int seq_count = 0;
				int seq_rev_count = 0;
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
								char seq_info[100] = { 0 };
								read_arr(protein_seq, seq_info, '\n', -1);
								char sequence[1000] = { 0 };
								seq_count = read_arr(protein_seq, sequence, '>', 0);

								if (*point[1] == 32)
								{
									*point[1] = 49;
								}
								else
								{
									start = atoi(point[1]);
									if (start == 0)
									{
										check_start = 1;
										puts("check your start value");
									}
								}

								if (*point[2] == 32)
								{
									end = seq_count;
								}
								else
								{
									end = atoi(point[2]);
									if (end == 0)
									{
										check_end = 1;
										puts("check your end value");
									}
								}

								if (*point[3] == 43)
								{
									if (check_start == 0 && check_end == 0)
									{
										printf("ID : %s\n", seq_info);
										for (idx3 = start; idx3 <= end; idx3++)
										{
											printf("%c", sequence[idx3]);
										}
									}
								}
								if (*point[3] == 45)
								{
									seq_rev_count = reverse_seq(protein_seq, sequence, '>', start, end);
									if (check_start == 0 && check_end == 0)
									{
										printf("ID : %s\n", seq_info);
										for (idx3 = end; idx3 >= start; idx3--)
										{
											printf("%c", sequence[idx3]);
										}
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
				puts("ID NOT FOUND!");
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
			puts("check your number");
		}
	}
	return 0;
}