//28.Convert years into days and months 
#include<stdio.h>
main()
{
	int years,days,months;
	
	printf("\n\n\t Enter the number of years : ");
 	scanf("%d",&years);
 	
 	months=years*12;
	 
	days=years*365;
 	
 	printf("\n\n\t Number of days and months in years : %d %d",days,months);
}
