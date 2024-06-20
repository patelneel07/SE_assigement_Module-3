//30. WAP to convert years into days and days into years
#include<stdio.h>
main()
{
	int years,days;
	
	printf("\n\n\t Enter the number of years : ");
	scanf("%d",&years);
	
	days=years*365;
	
	printf("\n\n\t Number of days : %d",days);
	
	printf("\n\n\t Enter the number of days : ");
	scanf("%d",&days);
	
	years=days/365;
	
	printf("\n\n\t Number of years : %d",years);
	
}
