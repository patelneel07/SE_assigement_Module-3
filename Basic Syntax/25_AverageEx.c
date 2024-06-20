/*25.Accept 5 expense 
from user and find average of expense */
#include<stdio.h>
main()
{
	int e1,e2,e3,e4,e5,total=0,avg=0;
	
	printf("\n\n\t Entre the Expance 1 : ");
	scanf("%d",&e1);
	printf("\n\n\t Entre the Expance 2 : ");
	scanf("%d",&e2);
	printf("\n\n\t Entre the Expance 3 : ");
	scanf("%d",&e3);
	printf("\n\n\t Entre the Expance 4 : ");
	scanf("%d",&e4);
	printf("\n\n\t Entre the Expance 5 : ");
	scanf("%d",&e5);
	
	total=e1+e2+e3+e4+e5;
	avg=total/5;
	
	printf("\n\n\t Average of Expence : %d",avg);
}
