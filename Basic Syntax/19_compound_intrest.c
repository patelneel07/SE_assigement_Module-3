//19.Calculate compound interest
#include<stdio.h>
main()
{
	int a,p,r,t;
	printf("\n\n\t Enter the Principal amount(p): ");
	scanf("%d",&p);
	printf("\n\n\t Enter the Intrest rate(r) : ");
	scanf("%d",&r);
	t=(1+(r%100));
	a=p*t*t;
	printf("\n\n\t Compound Intrest %d ",a);
}
