//18. Write a C program to calculate profit and loss on a transaction. 
#include<stdio.h>
main()
{
	int p,s,l,c;
	printf("\n\n\t Enter the Cost Prise : ");
	scanf("%d",&c);
	printf("\n\n\t Enter the selling prise : ");
	scanf("%d",&s);
	p=s-c;
	l=c-s;
	if(s>c)
    {
        printf("\n\n\t  Profit :%d",p);
    }
    else if(c>s)
    {
        printf("\n\nt loss :%d",l);
    }
    else
    {
        printf("\n\nt no Profit no Loss");
    }
}
