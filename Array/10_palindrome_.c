//10. WAP to perform Palindrome number using for loop and function

#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,r,s=0;
    
    printf("\n\n\t Enter The Number:");
    scanf("%d",&n);
     
    
    for(i=n;i>0; )
    {
        r=i%10;
        s=s*10+r;
        i=i/10;
    }
     
    
    if(s==n)
    {
        printf("\n\n\t Number is Palindrome  %d",n);
    }
    else
    {
        printf("\n\n\t Number is not a Palindrome : %d ",n);
    }
    
}
