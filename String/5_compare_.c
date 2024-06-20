//5. Write a program in C to compare two strings without using string library functions. 
#include <stdio.h>  
#include<string.h>  
int main()  
{  
   char str1[20];  
   char str2[20];  
   int value;
   
   printf("\n\n\t Enter the first string : ");  
   scanf("%s",str1);
     
   printf("\n\n\t Enter the second string : ");  
   scanf("%s",str2);  
   
   
   value=strcmp(str1,str2);  
   
   if(value==0)  
   printf("\n\n\t strings are same");  
   else  
   printf("\n\n\t strings are not same");  
   return 0;  
}  
