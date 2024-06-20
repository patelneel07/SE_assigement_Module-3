// Q_19 
#include<stdio.h>
int main()
{
    int r,c,s;
    r=1;
    while(r<=5)
    {
        s=5;
        while(s>=r)
        {
            printf(" ");
            s--;

        }
        c=1;
        while(c<=r)
        {
            printf(" * ");
			c++;
        }
        printf("\n");
		r++;
    }

}
