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
	int i = 0;
	int seat = 0;
	int order[200];
	char check_name[20];
	struct phone_collect * man[200];

	FILE* save = fopen("read_Tel_coll.txt", "rt");
	
	if (save == NULL)
	{
		puts("파일 오픈 오류");
	}
	
	while (1)
	{
		man[count] = (struct phone_collect*)malloc(sizeof(struct phone_collect));
		fscanf(save, "%s %s ", &man[count]->name, &man[count]->phone);
		//delete_buffer();
		
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
		printf("*****MENU*****\n");
		printf("1.Insert\n");
		printf("2.Delete\n"); 
		printf("3.Search\n");
		printf("4.Print All\n");
		printf("5.Exit\n");
		scanf("%d", &num);
		order[count] = num;
		if (num == 1)
		{

			man[count] = (struct phone_collect*)malloc(sizeof(struct phone_collect));
			printf("Input Name :");
			scanf("%s", man[count]->name);
			printf("Input Tel Number:");
			scanf("%s", man[count]->phone);
			printf("\tData Inserted\n");
			
			count++;

		}
		else if (num == 2)
		{
			printf("Input Name :");
			scanf("%s", check_name);
			for (index = 0; index < count; index++)
			{
				if (!strcmp(man[index]->name, check_name))
				{
					order[index] = 0;
					printf("\tData Deleted\n");
					free(man[index]);
					for (index; index < count; index++)
					{
						man[index] = man[index + 1];						
					}
				}				
			}
			count--;
		}
		else if (num == 3)
		{
			printf("Input Name :");
			scanf("%s", check_name);
			for (index = 0; index < count; index++)
			{
				
				if (!strcmp(man[index]->name, check_name))
				{
					printf("Name:%s\n", man[index]->name);
					printf("Tel:%s\n", man[index]->phone);
					printf("\tData Searched\n");
				}
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
	}

	fclose(save);

	return 0;
}