//8. WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include<stdio.h>
main()
{
	int h;
	printf("\n\n\t Entre the height : ");
	scanf("%d",&h);
	
	if(h>150)
	{
		printf("\n\n\t Person height is Tall....");
	}
	else if(h>130 && h<150)
	{
		printf("\n\n\t Person height is Medium....");
	}
	else if(h>110 && h<150)
	{
		printf("\n\n\t Person height is Small....");
	}
	else 
	{
		printf("\n\n\t Person is Smallest....");
	}
}
