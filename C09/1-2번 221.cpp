#include <stdio.h>
int FahToCel (int Fah)
{
	return (Fah-32)/1.8;
	
}
int CelToFah (int Cel)
{
	return 1.8*Cel+32;
 } 
int main (void)
{
	int fah;
	int cel;
	int num;
	printf("Fah=1? Cel=2?\n");
	scanf("%d",&num);
	if(num==1)
	{
		scanf("%d",&fah);
		printf("È­¾¾¿Âµµ=%d",CelToFah(fah));
	}	
	if(num==2)
	{
		scanf("%d",&cel);
		printf("¼·¾¾¿Âµµ=%d",FahToCel(cel));
	}	
}
