//1. Write a program in C to find the length of a string without using library functions. 
#include <stdio.h>
int main()
{
    char str[100];
    int i,length=0;
    
    printf("\n\n\t Enter a string: ");
    scanf("%s",&str);
    
    for(i=0; str[i]!='\0'; i++)
    
	{
        length++; 
    }
    
    printf("\n\n\t Length of input string: %d",length);
    
}
