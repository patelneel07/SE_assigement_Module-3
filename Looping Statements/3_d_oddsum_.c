//d. Sum of odd numbers 
#include<stdio.h>
main()
{
	int i,n,sum=0;
	
	printf("\n\n\t Enter the number : ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		sum=sum+n;
		printf(" \n\n\t %d",sum);
		i=i+2;
	}
	printf("\n\n\t Sum ofodd number :",n);
}
