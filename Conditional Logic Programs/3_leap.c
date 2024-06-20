//3. WAP to check if the given year is a leap year or not.
#include<stdio.h>
main()
{
	int l;
    printf("\n\n\t Enter the year:");
    scanf("%d",&l);
    if(l%4==0)
        printf("\n\n\t  is leap year ");
    else
        printf("\n\n\t  is not leap year  ");

}
