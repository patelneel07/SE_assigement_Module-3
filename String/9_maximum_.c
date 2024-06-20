//9. Write a program in C to find the maximum number of characters in a string. 
#include <stdio.h>
main() 
{
    char str[1000], ch;
    int count = 0;
    int i;

   
    printf("\n\n\t Enter a character : ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; ++i) 
		{
        		if (ch == str[i])
            	++count;
    	}

    printf("\n\n\t Maximum number of characters := %d",count);

}

