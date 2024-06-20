//17. Calculate person’s insurance premium based on salary
#include<stdio.h>
main()
{
	int a,b,mp;
	printf("\n\n\t Enter Your Salary : ");
	scanf("%d",&a);
	printf("\n\n\t Enter the Policy term in year : ");
	scanf("%d",&b);
	mp=a/(b*12);
	printf("\n\n\t Monthly premium : %d",mp);
}
