//15.Calculate sum of 10 numbers using of while loop 
#include<stdio.h>
main()
{
	int num,sum=0,count=0;
	while (count < 10) 
	{
        
        printf("\n\n\tEnter number %d: ", count + 1);
        scanf("%d", &num);

        
        sum += num;

        
        count++;
    }

    
    printf("\n\n\tThe sum of the 10 numbers is: %d\n", sum);	
}
