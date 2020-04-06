#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
int reverse_seq(FILE* protein_seq, char* sequence, int to_message, int start, int end) //�󺸼���
{
	int i = 0;
	for (start; start <= end; start++)
	{
		sequence[i] = fgetc(protein_seq);
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
		i++;

	}
	return i - 1;

}
int main(void)
{
	FILE* protein_seq = fopen("sequence.txt", "rt");
	if (protein_seq == NULL)
	{
		puts("���Ͽ��¿���");
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
			puts("locus_id : start : end : strand(+)(-) ������ �Է����ּ���.");
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
			
			printf("start = %d\n",*point[1]);
			printf("end = %d\n", *point[2]);
			/*if (start == '')
			{

			}*/
			if (strcmp(point[1], point[2]) > 0) //start�� end���� ŭ
			{
				check_se = 1;
			}

			if (check_se == 1)
			{
				puts("start, end ������ �ٽ� �����ּ���");
			}

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
						if (seq_id[index] == 32)//�����̽���
						{
							seq_id[index] = NULL;
							if (!strcmp(seq_id, point[0]))
							{
								printf("same string\n");
								char seq_info[100] = { 0 };
								read_arr(protein_seq, seq_info, '\n');
								printf("%s", seq_info);
								printf("\n");
								start = atoi(point[1]);
								end = atoi(point[2]);

								if (*point[3] == 43)
								{
									char sequence[1000] = { 0 };
									seq_count = read_arr(protein_seq, sequence, '>');
									//fseek(protein_seq, -seq_count - 4, SEEK_CUR);
									for (idx3 = start; idx3 <= end; idx3++)
									{
										ch = fgetc(protein_seq);
										printf("%c", ch);
									}
								}
								if (*point[3] == 45)
								{

									char sequence[1000] = { 0 };
									seq_rev_count = reverse_seq(protein_seq, sequence, '>', start, end);
									for (idx3 = seq_rev_count; idx3 >= 0; idx3--)
									{
										printf("%c", sequence[idx3]);
									}
									/*fseek(protein_seq, -seq_count - 4, SEEK_CUR);
									fseek(protein_seq, end, SEEK_CUR);
									for (idx3 = start; idx3 <= end; idx3++)
									{
										ch = fgetc(protein_seq);
										printf("%c", ch);
										fseek(protein_seq, -2, SEEK_CUR);
									}*/
									//printf("%s", sequence);
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
			puts("�ٽ� �Է��ϼ���.");
		}

	}
	return 0;
}