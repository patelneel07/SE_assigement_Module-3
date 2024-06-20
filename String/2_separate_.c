//2. Write a program in C to separate individual characters from a string. 

#include <stdlib.h>
#include <stdio.h>

main()
{
    char str[20];
    int i;
    
    printf("\n\n\t Enter the string: ");
    gets(str);
    
   
    
    printf("\n\n\t Printing the characters:: ");
    
    for (i=0;str[i]!='\0';i++) 
		{
        	if (str[i] != ' ') 
			{ 
            	printf("\n\n\t %c",str[i]);
       		}
    	}
    return 0;
}
