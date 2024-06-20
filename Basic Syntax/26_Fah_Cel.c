//26.Convert temperature Fahrenheit to Celsius
#include<stdio.h>
main()
{
	float f,c;
	
	printf("\n\n\t Enter Temperature Fahrenheit  : ");
	scanf("%f",&f);
	
	c=(f-32)*5/9;
	
	printf("\n\n\t Fahrenheit to Celsius : %f",c);
}
