//7. WAP Find out length of string without using inbuilt function 
#include <stdio.h>
int main()
{
  
    char str[100];
    int i,length=0;
    
    
    printf("\n\n\t Enter a string: ");
    scanf("%s",str);

    
    for(i=0; str[i]!='\0'; i++)
    {
        length++; 
    }
    
    printf("\n\n\t Length of input string: %d",length);
    
}
