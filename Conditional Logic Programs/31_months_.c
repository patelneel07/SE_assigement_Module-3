/*31. Write a program in C to read any Month Number in integer 
and display the number of days for this month. */
#include<stdio.h>
main()
{
	int M;
	printf("\n\n\t Enter the number of months : ");
	scanf("%d",&M);
	
	switch (M)
	{
		case 1 :
				printf("\n\n\t Month of day : 31");
				break;
		case 2 :
				printf("\n\n\t Month of day : 28");
				break;
		case 3 :printf("\n\n\t Month of day : 31");
			break;
		case 4 :printf("\n\n\t Month of day : 30");
			break;
		case 5 :printf("\n\n\t Month of day : 31");
			break;
		case 6 :printf("\n\n\t Month of day : 30");
			break;
		case 7 :printf("\n\n\t Month of day : 31");
			break;
		case 8 :printf("\n\n\t Month of day : 30");
			break;
		case 9 :printf("\n\n\t Month of day : 31");
			break;
		case 10 :printf("\n\n\t Month of day : 30");
			break;
		case 11 :printf("\n\n\t Month of day : 31");
			break;
		case 12 :printf("\n\n\t Month of day : 30");
			break;
		default :printf("\n\n\t No Month Number ");
                break;
	}
	
	
}
