//9. Write a program make a summation of given number
#include<stdio.h>
main()
{
	int n,rem,sum=0;
	printf("\n\n\t Enter a number : ");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
		
	}
	printf("\n\n\tSummation of number : %d",sum);
}
