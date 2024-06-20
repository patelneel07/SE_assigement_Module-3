/*10.find the area of a rectangular prism 
formula : A=2(wl+hl+hw)*/
#include<stdio.h>
main()
{
	int l,b,h,a;
	printf("\n\n\t Enter the Length : ");
	scanf("%d",&l);
	printf("\n\n\t Enter the Breath : ");
	scanf("%d",&b);
	printf("\n\n\t Enter the Height : ");
	scanf("%d",&h);
	
	a=2*((l*b)+(l*h)+(h*b));
	printf("\n\n\t Area of rectangular prism : %d",a);
}
