 //13.WAP to accept 5 numbers from user and check entered number is even or odd using of array


#include <stdio.h>

main() 
{
   
    int i,num,numbers[5];

	char check(int num);

  		printf("\\n\nt Enter 5 numbers:\n");
    
    		for (i = 0; i < 5; i++) 
			{
        		printf("\n\n\tEnter number %d: ", i + 1);
        		scanf("%d", &numbers[i]);
    		}

    
    		printf("Results:\n");
    
    		for (i = 0; i < 5; i++) 
	
			{
        		printf("%d is %s\n", numbers[i], check(numbers[i]));
    		}

	 		{
	 		
    				if (num % 2 == 0) 
			
					{
        	
						printf("\n\n\t Even ");	//return "Even";
    		
					}
		
						else
		
					{
				
       				 	 printf("\n\n\t Odd"); //return "Odd";
    				}
}
 return 0;
}
