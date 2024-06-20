//23. C Program to Reverse a Number Using FOR Loop Series Program

#include <stdio.h>

main()
 {
    int num,temp=0,digit=0, reversedNum = 0;

    
    printf("\n\n\t Enter a number: ");
    scanf("%d", &num);

    
    for (temp = num; temp != 0; temp /= 10)
		{
        	 digit = temp % 10;
        	reversedNum = reversedNum * 10 + digit;
    	}

   
    printf("\n\n\t The reversed number is: %d", reversedNum);
}
