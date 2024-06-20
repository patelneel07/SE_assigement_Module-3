//17. Write a C program to check whether a triangle can be formed with the given values for the angles.
#include<stdio.h>
main()
{
	int x,y,z,T;
	printf("*-*-*-*-*-*Enter the agle of triangle*-*-*-*-*-*");	
	printf("\n\n\t Enter the Angle of triangle : ");
	scanf("%d",&x);
	printf("\n\n\t Enter the Angle of triangle : ");
	scanf("%d",&y);
	printf("\n\n\t Enter the Angle of triangle : ");
	scanf("%d",&z);
	
	T=x+y+z;
	
	
    printf("\n\n\t Triangle values are : %d",T);
    
    if(T==180)
    {
        printf("\n\n\t Triangle angles are valid : ");
    }
    else if (T>=180)
    {
       printf("\n\n\t Triangle angles are invalid : "); 
    }
    else if (T!=180)
    {
       printf("\n\n\t Triangle angles are invalid : "); 
    }
    else
    {
        printf("\n\n\t not a triangle");
    }

}
