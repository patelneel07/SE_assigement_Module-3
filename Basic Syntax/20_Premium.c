/*20.Accept monthly salary from the user and deduct 10% 
insurance premium, 10% loan installment find out of 
remaining salary. */
#include<stdio.h>
main()
{
	float a,i,l,r;
	printf("\n\n\t Enter the Salary : ");
	scanf("%f",&a);
	i=a*0.1;
	l=a*0.1;
	r=a-(i+1);
	printf("\n\n\t remaining salary : %f",r);
}
