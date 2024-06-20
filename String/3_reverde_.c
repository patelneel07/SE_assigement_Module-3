//3. Write a program in C to print individual characters of a string in reverse order
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
main()
{
	
    char str[100];
    int i,j;
 
    printf("\n\n\t Original String:");
    scanf("%s",&str);
 

    int len = strlen(str);
 
    
    for (i=0,j=len-1;i<=j;i++,j--)
	{
    
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
 
    printf("\n\n\t Reversed String: %s", str);
 
    return 0;
}
