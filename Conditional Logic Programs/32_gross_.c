/*32. Write a C program to input basic salary of an employee and 
calculate its Gross salary according to following: 
Basic Salary <= 10000 : HRA = 20%, DA 
= 80% Basic Salary <= 20000 : HRA = 
25%, DA = 90% 
Basic Salary > 20000 : HRA = 30%, DA = 95%\ */
#include<stdio.h>
main()
{
	int BS,HRA,DA,GS;
	printf("\n\n\tEnter the Basic salary of Employee=");
	scanf("%d",&BS);
	if(BS<=10000)
	{
	
		HRA=BS*0.20; //20%	
		DA=BS*0.8;   //80%
		GS=BS+HRA+DA;
		
		printf("\n\n\t Gross Salary=%d",GS);
    }
    else if(BS<=20000 && BS>=10000)
	{
		HRA=BS*0.25; //20%	
		DA=BS*0.9;   //80%
		GS=BS+HRA+DA;
		
		printf("\n\n\t Gross Salary=%d",GS);
	}
	else
	{
		HRA=BS*0.30; //20%	
		DA=BS*0.95;   //80%
		GS=BS+HRA+DA;
		
		printf("\n\n\t Gross Salary=%d",GS);
		
	}	   
}


