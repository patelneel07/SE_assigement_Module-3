/* 
36. Write a C program to input electricity unit charges and 
calculate total electricity bill according to the given condition: 
For first 50 units Rs. 
0.50/unit For next 100 
units Rs. 0.75/unit For next 
100 units Rs. 1.20/unit For 
unit above 250 Rs. 
1.50/unit 
An additional surcharge of 20% is added to the bill */
#include<stdio.h>
main()
{
	float u,b,s=0;
    
    
    printf("\n\n\t Enter the consumed Unit : "); 
    scanf("%f",&u);

    
    if(u >= 250) 
    {
        b = u * 1.50;
    }
    else if (u >= 150 && u < 250) 
    {
        b = u  * 1.20;
    } 
    else if (u >= 100 && u < 150) 
    {
        b = u * 0.75;
    } 
    else if (u >=50 && u < 100)
    {
        b = u * 0.50;
    }
    else if (u <= 50)
    {
        b = u * 0.50;
    }

    else 
    {
        exit(0);
    }

     s = b * 0.20; 

    b += s; 

    printf("\n\n\t Total electricity bill: Rs. %.2f\n",b);

}

