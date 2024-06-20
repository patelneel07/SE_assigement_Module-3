//1. Write a C program to accept two integers and check whether they are equal or not 
#include<stdio.h>
main()
{
	int n1,n2;
	
	printf("\n\n\t Enter the number : ");
	scanf("%d",&n1);
	printf("\n\n\t Enter the number : ");
	scanf("%d",&n2);
	
	if(n1==n2)
	{
		printf("\n\n\t Equal ");
	}
	else
	{
		printf("\n\n\t Not Equal ");
	}
}
