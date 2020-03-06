#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int singular_recursive(char* str_f,  char* reverse_str_f, char* message_arr_f, int* idx_f, int singular, int* index)
{
	reverse_str_f[singular] = str_f[*idx_f];
	*idx_f += 1;
	*index += 1;
	int result = singular - 1;

	if (message_arr_f[*index] != 1)
	{
		*index -= 1;
		return singular;	
	}
	
	singular_recursive(str_f, reverse_str_f, message_arr_f, idx_f, result, index);
}
int main(void)
{
	int i = 0;
	int j = 0;
	int num = 0;
	int index = 0;
	int count = 0;
	int sum = 0;
	int plur_index = 0;
	int singular = 0;//단수(1)
	int sig_change = 0;
	int idx = 0;
	int size = 0;

	puts("문자열 길이 정보를 입력하시오.");
	scanf("%d", &num);
	getchar();

	char* str1 = (char*)malloc( sizeof(char)*num);
	char* reserve_str1 = (char*)malloc(sizeof(char) * num);
	char* message_arr = (char*)malloc(sizeof(char) * num);
	puts("문자열입력하시오");
	gets(str1);

	for (i = 0; i < num; i++)
	{
		if (str1[i] == 32)
		{
			message_arr[count] = j;
			count++;
			message_arr[count] = 1;
			j = -1;
			count++;
		}
		j++;
	}

	for (i = 0; i < count; i++)
	{
		sum += message_arr[i];
	}

	message_arr[count] = num - sum;

	//배열요소에 단어 글자수, 띄어쓰기 개수 표시
	//count는 배열의 개수


	for (index = 0; index <= count; index++)
	{		
		if (message_arr[index] == 1)
		{
			singular = index == 0 ? num - 1 : size - 1;
			sig_change = singular_recursive(str1, reserve_str1, message_arr, &idx, singular, &index);
		}		
		else if (message_arr[index] > 1)
		{
			size = index == 0? num - message_arr[index] : sig_change - message_arr[index];
			
			for (plur_index = 0; plur_index < message_arr[index]; plur_index++)//횟수
			{
				reserve_str1[size + plur_index] = str1[idx];
				idx++;				
			}			
		}
		else
		{
			break;
		}
	}

	printf("\n");

	for (i = 0; i < num; i++)
	{
		printf("%c", reserve_str1[i]);
	}

	free(reserve_str1);
	free(message_arr);
	return 0;
}