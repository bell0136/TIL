#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct phone_collect
{
	char name[20];
	char phone[20];
};
void delete_buffer(void)
{
	while (getchar() != '\n');
}
int main(void)
{
	int num = 0;
	int index = 0;
	int count = 0;
	char check_name[20];
	char check_tel[20];
	struct phone_collect* man[200];


	FILE* save = fopen("read_Tel_coll.txt", "rt");

	if (save == NULL)
	{
		puts("파일 오픈 오류");
	}

	while (1)
	{
		man[count] = (struct phone_collect*)malloc(sizeof(struct phone_collect));
		fscanf(save, "%s %s ", &man[count]->name, &man[count]->phone);
		printf("\tName:%s\tTel:%s\n", man[count]->name, man[count]->phone);
		count++;
		if (feof(save) != 0)
		{
			fclose(save);
			break;
		}

	}

	while (1)
	{
		int insert_check = 0;
		int delete_check = 0;
		int search_check = 0;
		printf("*****MENU*****\n");
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Search\n");
		printf("4.Print All\n");
		printf("5.Exit\n");
		num = 0;
		scanf("%d", &num);
		delete_buffer();
		
		if (num == 1)
		{

			man[count] = (struct phone_collect*)malloc(sizeof(struct phone_collect));
			printf("Input Name :");
			scanf("%s", check_name);
			printf("Input Tel Number:");
			scanf("%s", check_tel);
			for (index = 0; index < count; index++)
			{
				if (!strcmp(man[index]->name, check_name) && !strcmp(man[index]->phone, check_tel))
				{
					insert_check = 1;
				}
			}
			if (insert_check == 1)//중복값이 있다.
			{
				puts("중복값이 있습니다. 다시 입력해주세요");
			}
			if (insert_check == 0)
			{
				strcpy(man[count]->name, check_name);
				strcpy(man[count]->phone, check_tel);
				printf("\tData Inserted\n");
				count++;
			}
		}
		else if (num == 2)
		{
			printf("Input Name :");
			scanf("%s", check_name);
			printf("Input Tel :");
			scanf("%s", check_tel);
			for (index = 0; index < count; index++)
			{
				if (!strcmp(man[index]->name, check_name) && !strcmp(man[index]->phone, check_tel))
				{				
					delete_check = 1;
					printf("\tData Deleted\n");
					free(man[index]);
					for (index; index < count; index++)
					{
						man[index] = man[index + 1];
					}
				}

			}
			if (delete_check == 1)
			{
				count--;
			}
			if (delete_check == 0)
			{
				puts("존재하지 않는 번호 또는 이름입니다. 다시입력해주세요");
			}

		}
		else if (num == 3)
		{
			printf("Input Name :");
			scanf("%s", check_name);
			for (index = 0; index < count; index++)
			{
				if (!strcmp(man[index]->name, check_name))
				{
					search_check = 1;
					printf("Name:%s\n", man[index]->name);
					printf("Tel:%s\n", man[index]->phone);
					printf("\tData Searched\n");
				}
			}
			if (search_check == 0)
			{
				puts("존재하지 않는 번호입니다. 다시입력해주세요.");
			}

		}
		else if (num == 4)
		{
			printf("[Print All Data]\n");
			for (index = 0; index < count; index++)
			{


				printf("\tName:%s", man[index]->name);
				printf("\tTel:%s\n", man[index]->phone);
			}
		}
		else if (num == 5)
		{
			FILE* save = fopen("read_Tel_coll.txt", "wt");
			for (index = 0; index < count; index++)
			{
				fprintf(save, "%s %s ", man[index]->name, man[index]->phone);
			}
			break;
		}
		else
		{			
			puts("숫자잘못입력, 다시입력해주세요");
		}
	}

	fclose(save);

	return 0;
}
