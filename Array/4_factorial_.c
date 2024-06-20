//4. WAP to find factorial using recursion

#include<stdio.h>
main()
{

	int result = 1, i,n;
	int factorial(n);
	{
		printf("\n\n\t Enter the number : ");
		scanf("%d",&n);
	}

	{
	  
    for (i = 2; i <= n; i++) 
        result *= i;
    
 
    printf("\n\n\t Factorial is   %d", result);
}
}
