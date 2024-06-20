//22. Accept 3 numbers from user using while loop and check each numbers palindrome 

#include <stdio.h>

main() 
{
    int num, revnum, rem, orgnum;
    int i = 1;

    while (i <= 3) 
	{
        printf("\n\n\t Enter number : ");
        scanf("%d", &num);

        orgnum = num;
        revnum = 0;

        
        while (num != 0) 
		{
            rem=num % 10;
            revnum = revnum * 10 + rem;
            num /= 10;
        }

        
        if (orgnum == revnum) 
		{
            printf("\n\n\t is a palindrom %d", orgnum);
        } else {
            printf("\n\n\t  is not a palindrome %d", orgnum);
        }

        i++;
    }
}

