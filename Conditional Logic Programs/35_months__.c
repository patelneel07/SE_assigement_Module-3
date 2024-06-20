/*35. Accept the input month number and print number of 
days in that month. */
#include<stdio.h>
main()
{
	int m;
	printf("\n\n\t Enter the month number : ");
	scanf("%d",&m);
	
	switch(m)
    {
        case 1 : printf("\n\n\t Months of Days :31");
                break;
        case 2 : printf("\n\n\t Months of Days :28");
                break;
        case 3 : printf("\n\n\t Months of Days :31");
                break;
        case 4 : printf("\n\n\t Months of Days :30");
                break;
        case 5 : printf("\n\n\t Months of Days :31");
                break;
        case 6 : printf("\n\n\t Months of Days :30");
                break; 
        case 7 : printf("\n\n\t Months of Days :31");
                break;
        case 8 : printf("\n\n\t Months of Days :31");
                break;
        case 9 : printf("\n\n\t Months of Days :30");
                break;
        case 10 : printf("\n\n\t Months of Days :31");
                break;
        case 11 : printf("\n\n\t Months of Days :30");
                break;
        case 12 : printf("\n\n\t Months of Days :31");
                break;    
        default :  printf("\n\n\t  No Month Number");
                break;
    }
}
