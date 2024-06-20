/*23. WAP to calculate swap 2 numbers with using of 
multiplication and division.*/
#include<stdio.h>
main()
{
	int n1,n2;
	
	printf("\n\n\t Entre the number : ");
	scanf("%d",&n1);
	printf("\n\n\t Entre the number : ");
	scanf("%d",&n2);
	
	printf("\n\n\t n1=%d n2=%d",n1,n2);
	n1=n1*n2;
	n2=n1/n2;
	n1=n1/n2;
	
	printf("\n\n\t n1=%d n2=%d",n1,n2);
}
