/*17.Calculate 5 numbers from user and calculate number of 
even and odd using of while loop*/
#include <stdio.h>
main()
 {
    int num, count = 0, evenCount = 0, oddCount = 0;

    
    while (count < 5) 
	{
        
        printf("\n\n\t Enter number %d: ", count + 1);
        scanf("%d", &num);

        
        if (num % 2 == 0)
		 	{
            	evenCount++; 
        	}
		 else
		  	{
            	oddCount++; 
        	}

        
        count++;
    }

    
    printf("\n\n\t Number of even numbers: %d", evenCount);
    printf("\n\n\t Number of odd numbers: %d", oddCount);
}
