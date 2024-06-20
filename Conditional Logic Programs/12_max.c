//12. WAP to find maximum number among 3 numbers using ternary operator 
#include<stdio.h>
main()

{
	int a,b,c,D;
	printf("\n\n\t Enter the Numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	
	D = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("\n\n\t Maximum number is: %d", D);	
}

