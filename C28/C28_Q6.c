#include <stdio.h>
struct phone_collect
{
	char name[20];
	char phone[20];
};
int main(void)
{
	int num = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	char order[200];
	int delete = 0;
	char check_name[20];
	struct phone_collect* man[200];
	while (1)
	{
		printf("입력:1, 삭제:2, 검색:3, 전체출력:4\n");
		scanf("%d", &num);
		order[k] = num;
		if (num == 1)
		{
			man[i] = malloc(sizeof(struct phone_collect));
			printf("이름 입력\n");
			scanf("%s", man[i]->name);
			printf("번호 입력\n");
			scanf("%s", man[i]->phone);
			j++;
		}
		else if (num == 2)
		{
			printf("이름 입력\n");
			scanf("%s", check_name);
			for (i = 0; i < j; i++)
			{
				order[i] = 0;
				if (man[i]->name == check_name)
				{
					free(man[i]);
				}
			}
			
		}
		else if (num == 3)
		{
			printf("이름 입력\n");
			scanf("%s", check_name);
			for (i = 0; i < j; i++)
			{

				if (man[i]->name == check_name)
				{
					printf("이름:%s\n", man[i]->name);
					printf("번호:%s\n", man[i]->phone);
				}
				
			}

		}
		else if (num == 4)
		{
			for (i = 0; i < j; i++)
			{
				printf("전화번호부 정보 출력\n");
				printf("이름:%s\n", man[i]->name);
				printf("번호:%s\n", man[i]->phone);
				if (order[i] == 0)
				{
					continue;
				}
			}
		}
		else if (num == 0)
		{
			break;
		}
		k++;
	}
	return 0;
}