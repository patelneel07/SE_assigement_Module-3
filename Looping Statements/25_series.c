//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include <stdio.h>

main() 
{
    int i,n,sum = 0;

    printf("\n\n\t Enter the value of n: ");
    scanf("%d", &n);

    
    for (i=1;i<=n;i++) 
		{
    	    sum +=i * i;
	    }

    
    printf("\n\n\t The sum of the series is: %d", sum);
}
