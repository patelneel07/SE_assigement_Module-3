//3. WAP to Find Area And Circumference of Circle 
#include<stdio.h>
main()
{
	int r,a,c;
	float pi;
	pi=3.14;
	printf("\n\n\t Radius of Circle : ");
	scanf("%d",&r);
	
	a=r*r*pi;
	
	printf("\n\n\t Area of Circle : %d",a);
	
	c=2*pi*r;
	printf("\n\n\t Ciccumference of Circle : %d",c);
}
