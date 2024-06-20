//18. Write a C Program to Print the Multiplication Table of N

#include<stdio.h>
main()
{
	int n,i;
	
	printf("\n\n\t Enter a number to print the multiplication table : ");
	scanf("%d",&n);
	
	i=1;
	while(i<=10)
	{
		printf("\n\n\t %d*%d=%d ",n,i,n*i);
	
		i++;
	}
}
