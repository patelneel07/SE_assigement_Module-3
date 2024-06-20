//10. WAP to check whether a number is negative, positive or zero. 
#include<stdio.h>
main()
{
	int n;
	printf("\n\n\t Enter a number: ");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("\n\n\t Number is positive : ");
	}
	else if(n<0)
	{
		printf("\n\n\t Number is negative : ");
	}
	else if(n==0)
	{
		printf("\n\n\tNumber is Neutral : ");
	}
}
