//29.Convert minutes into seconds and hours 
#include<stdio.h>
main()
{
	int min,sec,hr;
	
	printf("\n\n\t Enter the number of Minutes : ");
 	scanf("%d",&min);
 	
 	sec=min*60;
	 
	hr=min/60;
 	
 	printf("\n\n\t Number of sec and hr in Minutes : %d %d",sec,hr);
}
