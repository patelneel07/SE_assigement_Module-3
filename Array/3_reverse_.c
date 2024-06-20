//3. WAP to find reverse of string using recursion
#include<stdio.h>
#include<string.h>

void revs(char c[], int len);

int main() {
    char c[20];
    
    printf("\n\n\t Enter a Name: ");
    scanf("%s", c);
    
    printf("\n\n\t Reversed string using Recursion: ");
    revs(c, strlen(c));
    
    return 0;
}

void revs(char c[], int len) {
    if(len == 0) 
        return;
    
    printf("%c", c[len - 1]); 
    
    revs(c, len - 1); 
}

