#include <stdio.h>
typedef struct
{
	int age;
} person;
int main()
{
	person man = { 12 };
	// Person man = { 12 }; Person이라는 이름이 없는데 당연히 오류
}