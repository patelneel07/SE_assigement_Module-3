//27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 n
#include<stdio.h>
main()
{
	int n,i,div;
	printf("\n\n\t Enter the number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d/%d",i,i+1);
		if((i+2)%2==0)
		{
			printf("-");
		}
		else if(i==n)
		{
			printf("");
		}
		else 
		{
			printf("+");
		}
	}
}
