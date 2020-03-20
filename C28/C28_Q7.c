#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct phone_collect
{
	char name[20];
	char phone[20];
};
void delete_data(void)
{
	while (getchar() != '\n');
}
int main(void)
{
	int num = 0;
	int index = 0;
	int count = 0;
	int flag = 0;
	int order[200];
	char check_name[20];
	struct phone_collect* man[200];
	FILE* printer = fopen("Tel_collect.txt", "wt");

	while (1)
	{
		printf("*****MENU*****\n");
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Search\n");
		printf("4.Print All\n");
		printf("5.Exit\n");
		scanf("%d", &num);
		delete_data();
		order[flag] = num;
		if (num == 1)
		{
			printer = fopen("Tel_collect.txt", "at");
			man[flag] = malloc(sizeof(struct phone_collect));
			printf("Input Name :");
			scanf("%s", man[flag]->name);
			fprintf(printer,"%s", man[flag]->name);
			printf("Input Tel Number:");
			scanf("%s", man[flag]->phone);
			fprintf(printer,"%s", man[flag]->phone);
			printf("\tData Inserted\n");
			count++;
			flag++;
			delete_data();
		}
		else if (num == 2)
		{
			printer = fopen("Tel_collect.txt", "rt");			
			printf("Input Name :");
			scanf("%s", check_name);		
			for (index = 0; index < count; index++)
			{
				fscanf(printer, "Name:%s\n", man[index]->name);
				if (!strcmp(man[index]->name, check_name))
				{					
					order[flag] = 0;
					printf("\tData Deleted\n");
					free(man[index]);
				}
			}
			count--;
			flag++;
			fflush(printer);
		}
		else if (num == 3)
		{
			printer = fopen("Tel_collect.txt", "rt");
			
			printf("Input Name :");
			scanf("%s", check_name);
			for (index = 0; index < count; index++)
			{
				fscanf(printer, "Name:%s\n", man[index]->name);
				if (!strcmp(man[index]->name, check_name))
				{					
					printf("Name:%s\n", man[index]->name);
					fscanf(printer,"Tel:%s\n", man[index]->phone);
					printf("Tel:%s\n", man[index]->phone);
					printf("\tData Searched\n");
				}
			}
		}
		else if (num == 4)
		{
			printer = fopen("Tel_collect.txt", "rt");
			printf("[Print All Data]\n");
			for (index = 0; index < count; index++)
			{
				if (order[index] == 0)
				{
					continue;
				}
				fscanf(printer,"\tName:%s", man[index]->name);
				printf("\tName:%s", man[index]->name);
				fscanf(printer,"\tTel:%s\n", man[index]->phone);
				printf("\tTel:%s\n", man[index]->phone);			
			}			
		}
		else if (num == 5)
		{
			break;
		}
		fclose(printer);
	}
	return 0;
}