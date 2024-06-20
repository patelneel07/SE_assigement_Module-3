//7. Write a program in C to copy one string to another string. 
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i;
    
    printf("\n\n\tEnter string 1: ");
    scanf("%s", str1);
    
    for (i = 0; str1[i] != '\0'; ++i) 
	{
        str2[i] = str1[i];
    }
    
    str2[i] = '\0';
    
    printf("\n\n\t String 2: %s", str2);
    
    
}
