#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct phone_collect
{
	char name[20];
	char phone[20];
};
int main(void)
{
	int num = 0;
	int index = 0;
	int count = 0;

	int order[200];
	char check_name[20];
	struct phone_collect* man[200];
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
			man[count] = malloc(sizeof(struct phone_collect));
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
				}
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
					printf("Name:%s\n", man[index]->name);
					printf("Tel:%s\n", man[index]->phone);
					printf("\tData Searched\n");
				}
			}

		}
		else if (num == 4)
		{
			for (index = 0; index < count; index++)
			{
				if (order[index] == 0)
				{
					continue;
				}
				printf("[Print All Data]\n");
				printf("\tName:%s", man[index]->name);
				printf("\tTel:%s\n", man[index]->phone);
			}

		}
		else if (num == 5)
		{
			break;
		}
	}
	return 0;
}