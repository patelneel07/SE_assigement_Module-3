//30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/- 
#include<stdio.h>
main()
{
	int x,sc; 
    printf("\n\n\t Enter the Bill Amount : ");
    scanf("%d",&x);
    sc=x*0.18;
    printf("\n -------------------------------------------------");
    if(x>800)
    {
        printf("\n\n\t  Dear User Your Bill Amount Highr then 800 ");
        printf("\n\n\t  thats way you have to pay exatra charges ");
        printf("\n\n\t  You have to Pay this Extra on Your Bill Amount: %d",sc);
    }
    else if(x>=256 && x<800)
    {
        printf("\n\n\t You have to pay this Amount: %d",x);
    }
    else 
    {
        printf("\n\n\t Dear User Your Bill Is Not Vaild.....");
    }
}
