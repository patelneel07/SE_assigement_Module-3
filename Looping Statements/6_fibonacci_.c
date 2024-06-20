//6. WAP to print Fibonacci series up to given numbers
#include<stdio.h>
main()
{
	int a,b,c,n,i;
	
	printf("\n\n\t Enter the number : ");
	scanf("%d",&n);
	
	a=0;
	b=1;
	printf("\n\n\t %d %d",a,b);
	
	i=1;
	while(i<=n)
	{
		c=a+b;
		printf("%d",c);
		a=b;
		b=c;
		
		i++;
	}
}
