/*37. WAP to show 
i. Monday to Sunday using switch case */
#include<stdio.h>
main()
{
	int x;
    printf("\n\t Enter number between 1 to 7 :");
    scanf("%d",&x);
        switch(x)
    {
        case 1 : printf("\n\t Monday");
                break;
        case 2 : printf("\n\t Tuesday");
                break;
        case 3 : printf("\n\t Wednesday");
                break;
        case 4 : printf("\n\t Thursday");
                break;
        case 5 : printf("\n\t Friday");
                break;
        case 6 : printf("\n\t Saturday");
                break;
        case 7 : printf("\n\t Sunday");
                break;
        default : printf("\n\t Dear User Please Enter Number Between 1 to 7 ");
                break;
	}
}
