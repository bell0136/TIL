#include <stdio.h>
#include <string.h>
int space(char* str)
{
	int i = 0;
	while (str[i] != 32)
	{
		i++;
	}
	return i;
}
int main(void)
{
	char str1[20] = {};
	char str2[20] = {};
	char reverse_str1[20] = {  };
	char reverse_str2[20] = {  };

	int name1 = 0;
	int name2 = 0;
	int size = 0;
	int i = 0;
	int j = 0;
	int age1 = 0;
	int age2 = 0;

	puts("이름 나이 입력하시오");
	fgets(str1, sizeof(str1), stdin);
	
	puts("이름 나이 입력하시오");
	fgets(str2, sizeof(str2), stdin);

	for (i = 0; i < sizeof(str1)-1; i++)
	{
		size = sizeof(str1);
		reverse_str1[size - i - 1] = str1[i];
	}
	for (i = 0; i < sizeof(str2) - 1; i++)
	{
		size = sizeof(str2);
		reverse_str2[size - i - 1] = str2[i];
	}
	printf("\n");

	printf("%d", reverse_str1[0]);
	for (j = 0; j < sizeof(str1); j++)
	{
		printf("%c", reverse_str1[j]);
	}
	printf("\n");
	for (j = 0; j < sizeof(str2); j++)
	{
		printf("%c", reverse_str2[j]);
	}
	name1 = space(str1);
	name2 = space(str2);

	printf("\n");
	printf("%d", reverse_str1[0]);
	printf("%d\n", name1);
	printf("%d\n", name2);

	if (name1 != name2)
	{
		puts("이름이 다릅니다.");
	}
	if (name1 == name2)
	{
		if (!strncmp(str1, str2, name1))
		{
			puts("이름이 같습니다.");
		}
		else
		{
			puts("이름이 다릅니다");
		}
	}

	age1 = space(reverse_str1);
	age2 = space(reverse_str2);

	printf("%d\n", age1);
	printf("%d\n", age2);

	if (age1 != age2)
	{
		puts("나이가 다릅니다.");
	}
	if (age1 == age2)
	{
		if (!strncmp(reverse_str1, reverse_str2, age1))
		{
			puts("나이가 같습니다.");
		}
		else
		{
			puts("나이가 다릅니다");
		}
	}
	return 0;
}