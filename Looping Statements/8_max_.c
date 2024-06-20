//8. Write a program to find out the max from given numberh

#include <stdio.h>

main()
 {
    int num, max;

    
    printf("\n\n\t Enter the numbers: ");
    scanf("%d", &num);

   
    max = num;

   
    while (num == 1) 
	{
   
        if (num > max) 
		{
            max = num;
        }
    }

     printf("\n\n\t  Maximum number: %d", max);

}

