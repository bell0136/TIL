#include <stdio.h>
void acculater_one (void)
{
	int num1=10;
	num1++;
	printf("num1=%d",num1);
 } 
 void acculater_two (void)
 {
 	int num1=20;
 	int num2=30;
 	num1++;
 	num2--;
 	printf("num1=%d,num2=%d",num1,num2);
 }
 int main (void)
 {
 	int num1=17;
 	acculater_one();
 	acculater_two();
 	printf("num1=%d",num1);
 }
