//5. WAP to print factorial of given number
#include<stdio.h>
main()
{
	int i,n,f=1;
	
	printf("\n\n\t Enter the number : ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		f=f*i;
		
		i++;
	}
	printf("\n\n\t factorial of %d is %d",n,f);
}
