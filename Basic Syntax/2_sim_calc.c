/* 2. Write a program to make Simple calculator (to make 
addition, subtraction, multiplication, division and modulo) */
#include<stdio.h>

main()
{
	int a,b,c;
	printf("\n\n\t Enter any two Value: ");
	scanf("%d %d",&a,&b);
	
	c=a+b;
	printf("\n\n\t Addition %d + %d = %d ",a,b,c);	
	
	c=a-b;
	printf("\n\n\t Substraction %d - %d = %d ",a,b,c);
	
	c=a*b;
	printf("\n\n\t Multiplication %d * %d = %d ",a,b,c);
	
	c=a/b;
	printf("\n\n\t Division %d / %d = %d ",a,b,c);
}
