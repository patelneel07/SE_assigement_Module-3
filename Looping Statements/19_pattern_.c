//19 pattern
#include<stdio.h>
int main()
{
	int R,C,N;
	N=1;
	R=1;
	while(R<=5)
	{
		C=1;
		while(C<=R)
		{
			printf("%d ",N);
			N++;
			C++;
		}
		printf("\n");
		R++;
	}
}
