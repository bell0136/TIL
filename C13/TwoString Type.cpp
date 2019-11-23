#include <stdio.h>
int main(void)
{
	char arr1[] = "my spring";
	const char* arr2 = "your spring";
	printf("%s %s\n", arr1, arr2);
	
	arr2 = "spring";
	printf("%s %s\n", arr1, arr2);

	arr1[0] = 'X';
	
	printf(" %s %s\n", arr1, arr2);
	return 0;

}