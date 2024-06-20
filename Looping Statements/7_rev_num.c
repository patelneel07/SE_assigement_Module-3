//7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746 
#include<stdio.h>
main()
{
	int a,rev=0,rem;
	
	printf("\n\n\t Enter a number : ");
	scanf("%d",&a);
	
	while(a!=0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a/=10;
	}
	printf("\n\n\t Reverse number = %d",rev);
	
	
}
