/* 24.Accept 5 employees name and 
salary and count average and total salary */
#include<stdio.h>
main()
{
	char a[12],b[12],c[12],d[12],e[12];
	int e1,e2,e3,e4,e5,total=0,avg=0;
	
	
	printf("\n\n\t Entre the name : ");
	scanf("%s",&a[12]);
	printf("\n\n\t Entre the name : ");
	scanf("%s",&b[12]);
	printf("\n\n\t Entre the name : ");
	scanf("%s",&c[12]);
	printf("\n\n\t Entre the name : ");
	scanf("%s",&d[12]);
	printf("\n\n\t Entre the name : ");
	scanf("%s",&e[12]);

	printf("\n\n\t Entre the Salary : ");
	scanf("%d",&e1);
	printf("\n\n\t Entre the Salary : ");
	scanf("%d",&e2);
	printf("\n\n\t Entre the Salary : ");
	scanf("%d",&e3);
	printf("\n\n\t Entre the Salary : ");
	scanf("%d",&e4);
	printf("\n\n\t Entre the Salary : ");
	scanf("%d",&e5);
	
	total=e1+e2+e3+e4+e5;
	avg=total/5;
	
	printf("\n\n\t Average Salary : %d",avg);
	printf("\n\n\t Total Salary : %d",total);
}
