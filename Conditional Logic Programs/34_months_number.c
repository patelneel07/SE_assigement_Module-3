//34. Accept month number and display month name 
#include<stdio.h>
main()
{
	int M;
    printf("\n\n\t Enter the  Month numumber : ");
    scanf("%d",&M);
    switch(M)
    {
        case 1 : printf("\n\n\t Months name is  January");
                break;
        case 2 : printf("\n\n\t Months name is  February");
                break;
        case 3 : printf("\n\n\t Months name is  March");
                break;
        case 4 : printf("\n\n\t Months name is  April");
                break;
        case 5 : printf("\n\n\t Months name is  May");
                break;
        case 6 : printf("\n\n\t Months name is  June");
                break; 
        case 7 : printf("\n\n\t Months name is   July");
                break;
        case 8 : printf("\n\n\t Months name is  August");
                break;
        case 9 : printf("\n\n\t Months name is  September");
                break;
        case 10 : printf("\n\n\t Months name is  October");
                break;
        case 11 : printf("\n\n\t Months name is  November");
                break;
        case 12 : printf("\n\n\t Months name is  December");
                break;    
        default :  printf("\n\n\t No Month Number ");
                break;
    }
}
