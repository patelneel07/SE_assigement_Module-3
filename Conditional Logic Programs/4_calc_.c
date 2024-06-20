/*4. WAP to make simple calculator (operation include 
Addition, Subtraction, Multiplication, Division, modulo) 
using conditional statement */
#include<stdio.h>
main()
{
	int x,y,z;

    printf("\n\n\t Enter the number:");
    scanf("%d",&x);
    printf("\n\n\t Enter the number:");
    scanf("%d",&y);
    printf("\n\n\t Press 1 for Addittion");
    printf("\n\n\t Press 2 for Subtraction");
    printf("\n\n\t Press 3 for Multiplication");
    printf("\n\n\t Press 4 for Division");
    printf("\n\n\t Press 5 for Close");
    printf("\n\n\t Enter the number:");
    scanf("%d",&z);
    if(z==1)
        {
            printf("\n\t Addittion:%d",x+y);
        }
    else if(z==2)
        {
            printf("\n\t Subtraction:%d",x-y);
        }
    else if(z==3)
        {
            printf("\n\t Multiplication:%d",x*y);
        }
    else if(z==4)
        {
            printf("\n\t Division:%d",x/y);
        }    
    else if(z==5)
        {
            exit(0);
        }
    else
    {
        printf("\n\n\t -----Try Again-----");
    }
}
